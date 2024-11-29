// https://github.com/slidevjs/slidev/blob/main/packages/client/layoutHelper.ts
import { CSSProperties } from "vue";

function resolveAssetUrl(url: string) {
  if (url.startsWith('/'))
    //@ts-ignore
    return import.meta.env.BASE_URL + url.slice(1)
  return url
}

export function handleBackground(background?: string, dim = false, backgroundSize = 'cover'): CSSProperties {
  const isColor = background && (background[0] === '#' || background.startsWith('rgb'))

  const style = {
    background: isColor
      ? background
      : undefined,
    color: (background && !isColor)
      ? 'white'
      : undefined,
    backgroundImage: isColor
      ? undefined
      : background
        ? dim
          ? `linear-gradient(#0005, #0008), url(${resolveAssetUrl(background)})`
          : `url("${resolveAssetUrl(background)}")`
        : undefined,
    backgroundRepeat: 'no-repeat',
    backgroundPosition: 'left top',
    backgroundSize,
  }

  if (!style.background)
    delete style.background

  return style
}
