void pollInputs() {
    struct input_event ev;
    while (read(input_fd, &ev, sizeof(ev)) > 0) {
        unsigned char doomKey;
        switch (ev.code) {
            case KEY_LEFT: doomKey = KEY_LEFTARROW; break;
            case KEY_RIGHT: doomKey = KEY_RIGHTARROW;break;
            case KEY_UP: doomKey = KEY_UPARROW;break;
            case KEY_DOWN: doomKey = KEY_DOWNARROW;break;
            case KEY_ENTER: doomKey = KEY_FIRE;break;
            default: continue;
        }
         keyQueue[writeIndex] = doomKey;
         writeIndex++;
    }
}

int DG_GetKey(unsigned char* doomKey) {
    unsigned short keyData = keyQueue[readIndex];
    readIndex++;
    *doomKey = keyData & 0xFF;
    return 1;
}
