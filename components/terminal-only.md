---
layout: full
---

<!-- Use local terminal streamed with ttyd like this `ttyd -W -p 8085 zsh` -->
<div class="frame-wrapper magic-border">
    <iframe height="1000" width="1000" src="http://localhost:8085" />
</div>

<style>
iframe {
    border-radius: 5px;
    overflow: hidden;
    position: relative;
    height: 100%;
    width: 100%;
}

.xterm-screen {
    width: 836px;
    height: 456px;
}

.frame-wrapper {
    height: 100%;
    width: 100%;
}
</style>
