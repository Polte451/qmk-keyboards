# Keychron Q11 vial-ijkl

A fork of Keyboard Q11 with ISO layout with VIAL support and customizations:
<ul>
<li> Mac base layer with tap dance functions
  <ul>
  <li>Right Fn double tap: Toggle Mac function-layer</li>
  <li>§ key tap: §</li>
  <li>§ key doulbe tap: Toggle Mac function-layer</li>
  <li>Right Alt doulbe tap: Toggle layer 4</li>
  <li>Left Fn hold: Toggle Mac function-layer</li>
  </ul>
<li> Mac function layer: 
  <ul>
  <li>IJKL to arrow keys customization
  </ul>
<li> Retain default functions on Windows layers </li>
<li> Total 5 mappable layers
  <ul>
  <li>Extra layer: layer_4
    <ul>
    <li>IJKl to arrow keys</li>
    </ul>
  </ul>
<li> Active layer indication on M1-M5 (F13-F20) keys with white backlight with keymap.c code
  <ul>
  <li>Layer 1 active, white backlight on key M2 / F14</li>
  <li>Layer 2 active, white backlight on key M3 / F16</li>
  <li>Layer 4 active, white backlight on key M1 / F13</li>
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
</ul>
<br>


Fork based on Tymon3310 repo:<br>
https://github.com/Tymon3310/vial-qmk/tree/vial-updated-keychron
<br>
<br>

# Layers
#### MAC_BASE - Layer 0 <br>
![MAC_BASE](/keychron-vial/vial-qmk/keyboards/keychron/q11/iso_encoder/keymaps/vial-ijkl/img/keychron_q11_iso_encoder_vial-ijkl_layer00.png "MAC_BASE")

Tap Dance<br>
| TD | On Tap | On hold | On double tap | On tap + hold |
| -- | -- | -- | -- | -- |
| 1 | § | - | TG(1) | - |
| 2 | Home | - | End | - |
| 3 | Page Up | - | Page Down | - |
| 4 | Apps | - | TG(1) | - |
| 5 | Alt | - | TG(4) | - |

<br>

Layer 0 macros<br>
| Macro | Action |
| -- | -- |
| 4 | Ctrl + Page Up |
| 5 | Ctrl + Page Down |
<br>

#### MAC_FN - Layer 1 <br>

IJKL to arrow keys layer
![MAC_FN](/keychron-vial/vial-qmk/keyboards/keychron/q11/iso_encoder/keymaps/vial-ijkl/img/keychron_q11_iso_encoder_vial-ijkl_layer01.png "MAC_FN")


Layer 1 macros<br>
| Macro | Action |
| -- | -- |
| 0 | Ctrl + C |
| 1 | Ctrl + V |
| 2 | Ctrl + Alt + Tab |
| 3 | Shift + F10 |
<br>

Special keys:<br>
| Special key | Function |
| -- | -- |
| 0x7e40 | Toggle active layer indication keys 

<br>

#### WIN_BASE - Layer 2 <br>
Retain default layout on Windows layer<br>
![WIN_BASE](/keychron-vial/vial-qmk/keyboards/keychron/q11/iso_encoder/keymaps/vial-ijkl/img/keychron_q11_iso_encoder_vial-ijkl_layer02.png "WIN_BASE")
<br>

#### WIN_FN - Layer 3 <br>
Retain default layout Windows function layer<br>
![WIN_FN](/keychron-vial/vial-qmk/keyboards/keychron/q11/iso_encoder/keymaps/vial-ijkl/img/keychron_q11_iso_encoder_vial-ijkl_layer03.png "WIN_FN")

#### Layer 4<br>

Special functions layer:<br>
<ul>
<li>IJKL to mouse cursor movement</li>
<li>Function row media controls</li>
<li>QWERT, ASDFG backlight controls</li>
<li>Arrow keys media control</li>
<li>Fn + Capslock: Caps Lock Toggle</li>
</ul>

![WIN_FN](/keychron-vial/vial-qmk/keyboards/keychron/q11/iso_encoder/keymaps/vial-ijkl/img/keychron_q11_iso_encoder_vial-ijkl_layer04.png "WIN_FN")

Layer 4 macros<br>
| Macro | Action |
| -- | -- |
| 3 | Shift + F10 |
| 4 | Ctrl + Page Up |
| 5 | Ctrl + Page Down |