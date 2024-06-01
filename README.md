# Ready Or Not Cheat
This repository develops a cheat library for the game `Ready Or Not`. It includes a `.dll` file designed to hook into the game's `d3d11.dll`, and an accompanying `.exe` file to facilitate the injection of the `.dll` into the game's space.
## DISCLAIMER
This repository is intended for educational purposes only. Please refrain from using it for any illegal activities. The author disclaims any responsibility for misuse or any adverse consequences resulting from such misuse.
## Functionality

The dynamic library provides the following functionalities:

- Display Ammo
- Unlimited Ammo
- Aim Bot
- Display Civilian 
- Display Suspect
- Reticle On
- Reduce Recoil
- Immortality
- One-Hit Kill
- Speed Up
- Weapon Speed Up

<p align="center">
  <img src="./Images/control_panel.png" alt="Control Panel" title="Control Panel">
</p>

### Display Ammo
This game does not show how many bullets you have in each magazine, so if player turns it on, he can easily track the remaining bullets.
<p align="center">
  <img src="./Images/show_ammo.gif" alt="Display Ammo" title="Display Ammo">
</p>

### Unlimited Ammo
Your primary weapon usually only has 30 bullets each magazine. Turning on this will give you infinite bullets.
<p align="center">
  <img src="./Images/unlimited_ammo.gif" alt="Unlimited Ammo" title="Unlimited Ammo">
</p>

### Aim Bot
This bot helps you locate the nearest `head` of all suspects, and move you mouse to the `head` with in 1 frame.
  <p align="center">
  <img src="./Images/aim_bot.gif" alt="Aim Bot" title="Aim Bot">
</p>

### Display Civilian
It can display a blue skeleton of every civilian in the game.
<p align="center">
  <img src="./Images/show_civilian.gif" alt="Display Civilian" title="Display Civilian">
</p>

### Display Suspect
It can display a red skeleton of every suspect in the game.
<p align="center">
  <img src="./Images/show_civilian.gif" alt="Display Suspect" title="Display Suspect">
</p>

### Reticle On
The game, by defualt, will not display a reticle on screen. This can help you aim better.
<p align="center">
  <img src="./Images/show_reticle.gif" alt="Reticle On" title="Reticle On">
</p>

### Reduce Recoil
 It decrease the recoil and spread of your weapon. And also reduces camera shake.
 <p align="center">
  <img src="./Images/reduce_recoil.gif" alt="Reduce Recoil" title="Reduce Recoil">
</p>

 ### Immortality
 If you turn it on, suspect will not be able to heart you.
 <p align="center">
  <img src="./Images/immortality.gif" alt="Immortality" title="Immortality">
</p>

 ### One-Hit Kill
 This will increase your weapon damage and weapon damage to a very large number, enabling you to kill the suspect easier.
 
 <p align="center">
  <img src="./Images/one_hit.gif" alt="One-Hit Kill" title="One-Hit Kill">
</p>

 ### Speed Up
 Adjust the time dilation of yourself. You can move faster with it.
 
 <p align="center">
  <img src="./Images/speed_up.gif" alt="Speed Up" title="Speed Up">
</p>

 ### Weapon Speed Up
 Same as above.
 
 <p align="center">
  <img src="./Images/weapon_speed.gif" alt="Weapon Speed up" title="Weapon Speed up">
</p>

 ## TODO
 - Finish the user inference 
 - Develop a driver to inject the `.dll` on Ring 0 level.