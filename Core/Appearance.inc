[Variables]
BarHandler=3

[darkLight.Func]
Measure=Script
ScriptFile=#@#Lua\darkLight.lua


[Header]
Meter=String
X=(20*[Set.S])
Y=(20*[Set.S]+#Scroll#)
DynamicVariables=1
Text=Appearance 
FontSize=(20*[Set.S])
FontWeight=450
MeterStyle=Set.String:S
Container=ContentContainer
Leftmouseupaction=[!Refresh]
InlinePattern=\s(.*)
InlineSetting=Size | 10
InlinePattern2=\s(.*)
InlineSetting2=Color | 150,150,150
Group=Shorthand