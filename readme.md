# QMK-keyboard layouts

Collection of keyboard layouts<br>
* [Keychron](#keychron)
  * [Keychron Q11 ISO vial-ijkl](#keychron-q11-iso-vial-ijkl)
* [Glorious](#glorious)
  * [Glorious GMMK 2 Compact 65% ISO vial-ijkl](#glorious-gmmk-2-compact-65-iso-vial-ijkl)
  * [Glorious GMMK 2 Compact 65% ISO vial](#glorious-gmmk-2-compact-65-iso-vial)

## Keychron
### Keychron Q11 ISO vial-ijkl

[![Keychron Q11 ISO vial-ijkl](keychron/q11_iso/vial-ijkl/img/keychron_q11_iso_encoder_vial-ijkl_layer00.png "Keychron Q11 ISO vial-ijkl")](https://github.com/Polte451/qmk-keyboards/tree/master/keychron/q11_iso/vial-ijkl)

ISO Nordic layout. VIAL support with customizations:
<ul>
<li> Mac base layer with tap dance functions
  <ul>
  <li>Right Fn double tap: Toggle Mac function-layer</li>
  <li>§ key tap: §</li>
  <li>§ key double tap: Toggle Mac function-layer</li>
  <li>Right Alt double tap: Toggle layer 4</li>
  <li>Left Fn hold: Toggle Mac function-layer</li>
  </ul>
<li> Mac function layer 
  <ul>
  <li>IJKL to arrow keys
  </ul>
<li> Retain default functions on Windows layers </li>
<li> Total 5 mappable layers
  <ul>
  <li>Extra layer: layer_4
    <ul>
    <li>IJKl to arrow keys</li>
    <li>Q11 runs out of space on flash if there are more than 5 layers</li>
    </ul>
  </ul>
<li> Active layer indication on M1-M5 (F13-F20) keys with white backlight
  <ul>
  <li>Layer 1 active: White backlight on key M2 / F14</li>
  <li>Layer 2 active: White backlight on key M3 / F16</li>
  <li>Layer 4 active: White backlight on key M1 / F13</li>
  <li>Backlight function customization with keymaps.c code
  <li>Custom QMK keycode keymap.c: TOGGLE_LAYER_LEDS</li>
  </ul>
<li>Volume Wheel on Mac base layer
  <ul>
  <li> Fn + Right Volume Wheel press: Sleep </li>
  <li> Left volume wheel scroll: Ctrl + Page Up / Ctrl + Page Down</li>
  </ul>
<li> Left Control + Caps Lock Tap: Toggle Caps Lock
  <ul>
  <li>When Caps Lock active: White backlight on Caps Lock key
  </ul>
<li>Key combinations
  <ul>
  <li>Caps Lock + Left Control: Toggle Caps Lock</li>
  <li>Caps Lock + Space: Toggle MAC_FN-layer</li>
  <li>Left Shift + Space: Toggle LAYER_4</li>
  </ul>
</ul>
<br>

Fork based on Tymon3310 vial-qmk repo:<br>
https://github.com/Tymon3310/vial-qmk/tree/vial-updated-keychron

## Glorious

### Glorious GMMK 2 Compact 65% ISO vial-ijkl
[![Glorious GMMK 2 Compact 65% ISO vial-ijkl](gmmk/gmmk2_p65_iso/vial-ijkl/img/gmmk_2_p65_iso_vial-ijkl-layer00.png "Glorious GMMK 2 Compact 65% ISO vial-ijkl")](https://github.com/Polte451/qmk-keyboards/tree/master/gmmk/gmmk2_p65_iso/vial-ijkl)
<br>

ISO Nordic layout. VIAL-support with customizations:
<ul>
<li>Total 4 layers
<li>Layer 0: Base layer
  <ul>
  <li>Base layer with Tap Dance functions to toggle IJKL to Arrow Keys layer</li>
  <li>With tap dance Home/Page Up and End/Page Down</li>
  </ul>
<li>Layer 1: Backlight controls and function keys on top row
  <ul>
  <li>Fn + P: Print Screen</li>
  <li>Fn + Å: Scroll Lock</li>
  <li>Arrow Keys to media controls
  </ul>
<li>Layer 2: IJKL to Arrow Keys
  <ul>
  <li>G: Layer 3</li>
  </ul>
<li>Layer 3: IJKL to Mouse
<li>Keyboard backlight
  <ul>
  <li>When layers 1 and up are active, white backlight on keys with keymapping. Sync white backlight brightness to keyboard backlight brightness. With white LEDs minimum brightness when keyboard backlight is off.</li>
  <li>When Caps Lock activated: White backlight on Caps Lock key</li>
  <li>When Scroll Lock activated: White backlight on Å-key</li>
  </ul>
<li>Functions with Key Combinations
  <ul>
  <li>Right Control + Caps Lock Key: Toggle Caps Lock</li>
  <li>Alt + 4: Sleep</li>
  <li>Caps Lock Key + Space Bar: Toggle Layer 2</li>
  <li>Tab + Space Bar: Toggle Layer 3</li>
  </ul>
</ul>

<br>
Fork based on Reddit user ptrxyz fork of Vial git repo:<br>

https://www.reddit.com/r/glorious/comments/w5djer/comment/it533dj/
<br>

### Glorious GMMK 2 Compact 65% ISO vial
[![Glorious GMMK 2 Compact 65% ISO vial](gmmk/gmmk2_p65_iso/vial/img/gmmk_2_p65_iso_vial-layer00.png "Glorious GMMK 2 Compact 65% ISO vial")](https://github.com/Polte451/qmk-keyboards/tree/master/gmmk/gmmk2_p65_iso/vial)

ISO keyboard layout with VIAL-support.<br>
<br>
Fork based on Reddit user ptrxyz fork of Vial git repo:<br>
https://www.reddit.com/r/glorious/comments/w5djer/comment/it533dj/
<br>