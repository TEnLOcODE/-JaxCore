
;================================================================================================================================================================================

[Color]
Meter=String
Text=Options
MeterStyle=Set.String:S | Set.OptionCat:S

[Option01]
Meter=String
Text=Colors
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S19203s8sdsds]
Meter=Shape
MeterStyle=Set.Div:S
[Option02]
Meter=String
Text=Blur type
MeterStyle=Set.String:S | Set.OptionName:S


; ;================================================================================================================================================================================

[Padding]
Meter=String
Text=Padding
MeterStyle=Set.String:S | Set.OptionCat:S

[Option10]
Meter=String
Text=Screen side padding (in pixels)
MeterStyle=Set.String:S | Set.OptionName:S

;================================================================================================================================================================================

[ScaleNsize]
Meter=String
Text=Scale and size
MeterStyle=Set.String:S | Set.OptionCat:S

[Option20]
Meter=String
Text=Global size
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S192038sdsds]
Meter=Shape
MeterStyle=Set.Div:S
[Option21]
Meter=String
Text=Corner size
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S192038]
Meter=Shape
MeterStyle=Set.Div:S
[Option22]
Meter=String
Text=Object spacing
MeterStyle=Set.String:S | Set.OptionName:S

;================================================================================================================================================================================

[Anim]
Meter=String
Text=Animations
MeterStyle=Set.String:S | Set.OptionCat:S

[Option30]
Meter=String
Text=Animations (Turn off for better performance on low-end devices)
MeterStyle=Set.String:S | Set.OptionName:S
[Set.Div:S138]
Meter=Shape
MeterStyle=Set.Div:S
[Option31]
Meter=String
Text=Animation duration (ms)
MeterStyle=Set.String:S | Set.OptionName:S

;================================================================================================================================================================================

[ColorMode:]
Meter=Shape
SecVar=ColorMode
0Act=[!CommandMeasure darkLight.Func "SwitchColor(0)"]
1Act=[!CommandMeasure darkLight.Func "SwitchColor(1)"]
MeterStyle=Set.Pick:S
Y=([Option01:Y]-#Set.P#+(-35/2+8)*[Set.S])
[ColorMode:0]
Meter=String
Text=Dark
FontColor=(#ColorMode# = 0 ? 0 : 255),(#ColorMode# = 0 ? 0 : 255),(#ColorMode# = 0 ? 0 : 255)
MeterStyle=Set.String:S | Set.PickOption_0:S
[ColorMode:1]
Meter=String
Text=Light
FontColor=(#ColorMode# = 1 ? 0 : 255),(#ColorMode# = 1 ? 0 : 255),(#ColorMode# = 1 ? 0 : 255)
MeterStyle=Set.String:S | Set.PickOption_1:S

[BlurBool:]
Meter=Shape
SecVar=BlurBool
0Act=[!WriteKeyValue Variables BlurType "Blur" "#Sec.SaveLocation#"]
1Act=[!WriteKeyValue Variables BlurType "Acrylic" "#Sec.SaveLocation#"]
MeterStyle=Set.Pick:S
Y=([Option02:Y]-#Set.P#+(-35/2+8)*[Set.S])
[BlurBool:0]
Meter=String
Text=Blur
FontColor=(#BlurBool# = 0 ? 0 : 255),(#BlurBool# = 0 ? 0 : 255),(#BlurBool# = 0 ? 0 : 255)
MeterStyle=Set.String:S | Set.PickOption_0:S
[BlurBool:1]
Meter=String
Text=Acrylic
FontColor=(#BlurBool# = 1 ? 0 : 255),(#BlurBool# = 1 ? 0 : 255),(#BlurBool# = 1 ? 0 : 255)
MeterStyle=Set.String:S | Set.PickOption_1:S
;================================================================================================================================================================================

[P]
Meter=Shape
MeterStyle=Set.Textbox:S
Y=([Option10:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value10]
Meter=String
Text=#P#
MeterStyle=Set.String:S | Set.Value:S

[Scale]
Meter=Shape
MeterStyle=Set.Textbox:S
Y=([Option20:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value20]
Meter=String
Text=#Scale#
MeterStyle=Set.String:S | Set.Value:S

[R]
Meter=Shape
MeterStyle=Set.Textbox:S
Y=([Option21:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value21]
Meter=String
Text=#R#
MeterStyle=Set.String:S | Set.Value:S

[GlobalP]
Meter=Shape
MeterStyle=Set.Textbox:S
Y=([Option22:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value22]
Meter=String
Text=#GlobalP#
MeterStyle=Set.String:S | Set.Value:S

[Animation]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option30:Y]-#Set.P#+(-20/2+8)*[Set.S])
[TweenTime1]
Meter=Shape
MeterStyle=Set.Textbox:S
Y=([Option31:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value31]
Meter=String
Text=#TweenTime1#
MeterStyle=Set.String:S | Set.Value:S