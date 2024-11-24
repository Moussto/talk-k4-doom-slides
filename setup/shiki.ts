/* ./setup/shiki.ts */
import { defineShikiSetup } from '@slidev/types'

export default defineShikiSetup(() => {
    return {
        // For some reason background color isnt loaded -> I override it in style.css
        themes: {
            dark: 'rose-pine-dawn',
            light: 'rose-pine-dawn',
        },
    }
})
