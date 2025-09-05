# ICRS PCB Ruler

A 15cm PCB ruler variant designed for IPRL. Forked from [here](https://github.com/ben5049/ICRS-PCB-Ruler) (with consent!) It can be easily adapted/rebranded using the KiCad project in this repository.

Front:

![image](front.PNG)

Back:

![image](back.PNG)

## KiCad Project
To open this project in KiCad 9.0 clone this repository and open the .kicad_pro file in [Ruler_KiCad](Ruler_KiCad). Next open the PCB editor and go to `Preferences > Manage Footprint Libraries > Add Existing` (the folder icon below the list of libraries). Then navigate to `Ruler_KiCad/ruler_footprints` and click "select folder". This is in order to get the custom footprints used in this project.

## Ordering
### PCB
The gerber files needed for ordering can be found in [Ruler_gerbers.zip](https://github.com/Imperial-Planetary-Robotics-Lab/IPRL_Merch_2024-25/blob/main/IPRL_2025_Ruler/PCB_RULER_IPRL_2025/PCB_RULER_IPRL_2025_GERBER.zip). Simply upload this .zip file to any PCB manufacturer's website.

The recommended specifications for ordering this PCB are as follows:
* 2 Layers
* 1.6mm thick FR4
* White silkscreen
* ENIG surface finish
* <= 1 oz Copper weight
* Tented vias
* +- 0.2mm Board outline tolerance
* Remove order number

### Stencils

The stencils are also recommended to order, make sure that customised size is chosen of 160x30. Everything else should be the default values
