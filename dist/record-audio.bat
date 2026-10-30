@echo off
rem Runs the game and also saves exactly what it sends to the sound card into mld_audio.wav
cd /d "%~dp0"
set AUDIO_WAV=mld_audio.wav
mylifedarklord.exe
