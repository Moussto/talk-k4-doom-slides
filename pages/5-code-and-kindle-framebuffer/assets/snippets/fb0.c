void DG_Init() { frameBuffer = open("/dev/fb0", O_RDWR); }

void DG_DrawFrame() {
    uint8_t memory_framebuffer[SCREEN_WIDTH * SCREEN_HEIGHT] = {0};

    for (int y = 0; y < DOOMGENERIC_RESY && y < SCREEN_HEIGHT; y++) {
        for (int x = 0; x < DOOMGENERIC_RESX && x < SCREEN_WIDTH; x++) {
          	pixel_t pixel = DG_ScreenBuffer[y * DOOMGENERIC_RESX + x];

            // RGBA bits
            uint8_t red = (pixel >> 16) & 0xFF;
            uint8_t green = (pixel >> 8) & 0xFF;
            uint8_t blue = pixel & 0xFF;
            uint8_t intensity = (0.299 * red) + (0.587 * green) + (0.114 * blue);

            memory_framebuffer[y * SCREEN_WIDTH + x] = 255 - intensity;
        }
    }

    // Write to fb0
    write(frameBuffer, memory_framebuffer, sizeof(memory_framebuffer));

    // update display with eink_fb
    FILE *file = fopen("/proc/eink_fb/update_display", "w");
    fprintf(file, "1");
    fclose(file);
}
