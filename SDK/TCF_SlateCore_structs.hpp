#pragma once

// The Cycle Frontier (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "TCF_Basic.hpp"
#include "TCF_SlateCore_enums.hpp"
#include "TCF_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.Geometry
// 0x0038
struct FGeometry
{
	unsigned char                                      UnknownData00[0x38];                                      // 0x0000(0x0038) MISSED OFFSET
};

// ScriptStruct SlateCore.Margin
// 0x0010
struct FMargin
{
	float                                              Left;                                                     // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Top;                                                      // 0x0004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Right;                                                    // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	float                                              Bottom;                                                   // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.SlateColor
// 0x0028
struct FSlateColor
{
	struct FLinearColor                                SpecifiedColor;                                           // 0x0000(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	TEnumAsByte<ESlateColorStylingMode>                ColorUseRule;                                             // 0x0010(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x17];                                      // 0x0011(0x0017) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateBrush
// 0x0088
struct FSlateBrush
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	struct FVector2D                                   ImageSize;                                                // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FMargin                                     Margin;                                                   // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSlateColor                                 TintColor;                                                // 0x0020(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	class UObject*                                     ResourceObject;                                           // 0x0048(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	struct FName                                       ResourceName;                                             // 0x0050(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	struct FBox2D                                      UVRegion;                                                 // 0x0058(0x0014) (CPF_ZeroConstructor, CPF_NoDestructor, CPF_Protected, CPF_NativeAccessSpecifierProtected)
	TEnumAsByte<ESlateBrushDrawType>                   DrawAs;                                                   // 0x006C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ESlateBrushTileType>                   Tiling;                                                   // 0x006D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ESlateBrushMirrorType>                 Mirroring;                                                // 0x006E(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	TEnumAsByte<ESlateBrushImageType>                  ImageType;                                                // 0x006F(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0070(0x0010) MISSED OFFSET
	unsigned char                                      bIsDynamicallyLoaded : 1;                                 // 0x0080(0x0001) (CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      bHasUObject : 1;                                          // 0x0080(0x0001) (CPF_Deprecated, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0081(0x0007) MISSED OFFSET
};

// ScriptStruct SlateCore.InputEvent
// 0x0018
struct FInputEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct SlateCore.PointerEvent
// 0x0058 (0x0070 - 0x0018)
struct FPointerEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x58];                                      // 0x0018(0x0058) MISSED OFFSET
};

// ScriptStruct SlateCore.CharacterEvent
// 0x0008 (0x0020 - 0x0018)
struct FCharacterEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.KeyEvent
// 0x0020 (0x0038 - 0x0018)
struct FKeyEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0018(0x0020) MISSED OFFSET
};

// ScriptStruct SlateCore.NavigationEvent
// 0x0008 (0x0020 - 0x0018)
struct FNavigationEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0018(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.AnalogInputEvent
// 0x0008 (0x0040 - 0x0038)
struct FAnalogInputEvent : public FKeyEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.FontOutlineSettings
// 0x0020
struct FFontOutlineSettings
{
	int                                                OutlineSize;                                              // 0x0000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bSeparateFillAlpha;                                       // 0x0004(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	bool                                               bApplyOutlineToDropShadows;                               // 0x0005(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	class UObject*                                     OutlineMaterial;                                          // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                OutlineColor;                                             // 0x0010(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.SlateFontInfo
// 0x0058
struct FSlateFontInfo
{
	class UObject*                                     FontObject;                                               // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	class UObject*                                     FontMaterial;                                             // 0x0008(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FFontOutlineSettings                        OutlineSettings;                                          // 0x0010(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FName                                       TypefaceFontName;                                         // 0x0040(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                Size;                                                     // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	int                                                LetterSpacing;                                            // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0008
struct FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.TableRowStyle
// 0x07C0 (0x07C8 - 0x0008)
struct FTableRowStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SelectorFocusedBrush;                                     // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveHoveredBrush;                                       // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 InactiveHoveredBrush;                                     // 0x01A0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 InactiveBrush;                                            // 0x0228(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 EvenRowBackgroundHoveredBrush;                            // 0x02B0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 EvenRowBackgroundBrush;                                   // 0x0338(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 OddRowBackgroundHoveredBrush;                             // 0x03C0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 OddRowBackgroundBrush;                                    // 0x0448(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateColor                                 TextColor;                                                // 0x04D0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateColor                                 SelectedTextColor;                                        // 0x04F8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DropIndicator_Above;                                      // 0x0520(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DropIndicator_Onto;                                       // 0x05A8(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DropIndicator_Below;                                      // 0x0630(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveHighlightedBrush;                                   // 0x06B8(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 InactiveHighlightedBrush;                                 // 0x0740(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.SlateSound
// 0x0018
struct FSlateSound
{
	class UObject*                                     ResourceObject;                                           // 0x0000(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_Protected, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData00[0x10];                                      // 0x0008(0x0010) MISSED OFFSET
};

// ScriptStruct SlateCore.ButtonStyle
// 0x0270 (0x0278 - 0x0008)
struct FButtonStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Normal;                                                   // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Hovered;                                                  // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Pressed;                                                  // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 Disabled;                                                 // 0x01A0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FMargin                                     NormalPadding;                                            // 0x0228(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FMargin                                     PressedPadding;                                           // 0x0238(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x0248(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0260(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x03B0 (0x03B8 - 0x0008)
struct FComboButtonStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                ButtonStyle;                                              // 0x0008(0x0278) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x0280(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowOffset;                                             // 0x0308(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0310(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MenuBorderBrush;                                          // 0x0320(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FMargin                                     MenuBorderPadding;                                        // 0x03A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x03E8 (0x03F0 - 0x0008)
struct FComboBoxStyle : public FSlateWidgetStyle
{
	struct FComboButtonStyle                           ComboButtonStyle;                                         // 0x0008(0x03B8) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateSound                                 PressedSlateSound;                                        // 0x03C0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSlateSound                                 SelectionChangeSlateSound;                                // 0x03D8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.EditableTextStyle
// 0x0218 (0x0220 - 0x0008)
struct FEditableTextStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0060(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImageSelected;                                  // 0x0088(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImageComposing;                                 // 0x0110(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 CaretImage;                                               // 0x0198(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x04C8 (0x04D0 - 0x0008)
struct FScrollBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HorizontalBackgroundImage;                                // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 VerticalBackgroundImage;                                  // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 VerticalTopSlotImage;                                     // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HorizontalTopSlotImage;                                   // 0x01A0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 VerticalBottomSlotImage;                                  // 0x0228(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HorizontalBottomSlotImage;                                // 0x02B0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x0338(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredThumbImage;                                        // 0x03C0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DraggedThumbImage;                                        // 0x0448(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x07F0 (0x07F8 - 0x0008)
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImageNormal;                                    // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImageHovered;                                   // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImageFocused;                                   // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundImageReadOnly;                                  // 0x01A0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                  // 0x0228(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              Font;                                                     // 0x0238(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0290(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateColor                                 BackgroundColor;                                          // 0x02B8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateColor                                 ReadOnlyForegroundColor;                                  // 0x02E0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FMargin                                     HScrollBarPadding;                                        // 0x0308(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FMargin                                     VScrollBarPadding;                                        // 0x0318(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0328(0x04D0) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.TextBlockStyle
// 0x0268 (0x0270 - 0x0008)
struct FTextBlockStyle : public FSlateWidgetStyle
{
	struct FSlateFontInfo                              Font;                                                     // 0x0008(0x0058) (CPF_Edit, CPF_BlueprintVisible, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSlateColor                                 ColorAndOpacity;                                          // 0x0060(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FVector2D                                   ShadowOffset;                                             // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                ShadowColorAndOpacity;                                    // 0x0090(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSlateColor                                 SelectedBackgroundColor;                                  // 0x00A0(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FLinearColor                                HighlightColor;                                           // 0x00C8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_AdvancedDisplay, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HighlightShape;                                           // 0x00D8(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 StrikeBrush;                                              // 0x0160(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UnderlineBrush;                                           // 0x01E8(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_AdvancedDisplay, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x02E0 (0x02E8 - 0x0008)
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredBackgroundBrush;                                   // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveFillBrush;                                          // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 InactiveFillBrush;                                        // 0x01A0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ArrowsImage;                                              // 0x0228(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                          // 0x02B0(0x0028) (CPF_NativeAccessSpecifierPublic)
	struct FMargin                                     TextPadding;                                              // 0x02D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.FocusEvent
// 0x0008
struct FFocusEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.MotionEvent
// 0x0030 (0x0048 - 0x0018)
struct FMotionEvent : public FInputEvent
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0018(0x0030) MISSED OFFSET
};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x04F8 (0x0500 - 0x0008)
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                UnderlineStyle;                                           // 0x0008(0x0278) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0280(0x0270) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                  // 0x04F0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.FontData
// 0x0020
struct FFontData
{
	struct FString                                     FontFilename;                                             // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	EFontHinting                                       Hinting;                                                  // 0x0010(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	EFontLoadingPolicy                                 LoadingPolicy;                                            // 0x0011(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	int                                                SubFaceIndex;                                             // 0x0014(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
	class UObject*                                     FontFaceAsset;                                            // 0x0018(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPrivate)
};

// ScriptStruct SlateCore.TypefaceEntry
// 0x0028
struct FTypefaceEntry
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FFontData                                   Font;                                                     // 0x0008(0x0020) (CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.Typeface
// 0x0010
struct FTypeface
{
	TArray<struct FTypefaceEntry>                      Fonts;                                                    // 0x0000(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.CompositeFallbackFont
// 0x0018
struct FCompositeFallbackFont
{
	struct FTypeface                                   Typeface;                                                 // 0x0000(0x0010) (CPF_NativeAccessSpecifierPublic)
	float                                              ScalingFactor;                                            // 0x0010(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.CompositeSubFont
// 0x0020 (0x0038 - 0x0018)
struct FCompositeSubFont : public FCompositeFallbackFont
{
	TArray<struct FInt32Range>                         CharacterRanges;                                          // 0x0018(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
	struct FString                                     Cultures;                                                 // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.CompositeFont
// 0x0038
struct FCompositeFont
{
	struct FTypeface                                   DefaultTypeface;                                          // 0x0000(0x0010) (CPF_NativeAccessSpecifierPublic)
	struct FCompositeFallbackFont                      FallbackTypeface;                                         // 0x0010(0x0018) (CPF_NativeAccessSpecifierPublic)
	TArray<struct FCompositeSubFont>                   SubTypefaces;                                             // 0x0028(0x0010) (CPF_ZeroConstructor, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.CaptureLostEvent
// 0x0008
struct FCaptureLostEvent
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct SlateCore.WindowStyle
// 0x1058 (0x1060 - 0x0008)
struct FWindowStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                MinimizeButtonStyle;                                      // 0x0008(0x0278) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FButtonStyle                                MaximizeButtonStyle;                                      // 0x0280(0x0278) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FButtonStyle                                RestoreButtonStyle;                                       // 0x04F8(0x0278) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x0770(0x0278) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TitleTextStyle;                                           // 0x09E8(0x0270) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveTitleBrush;                                         // 0x0C58(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 InactiveTitleBrush;                                       // 0x0CE0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FlashTitleBrush;                                          // 0x0D68(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateColor                                 BackgroundColor;                                          // 0x0DF0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 OutlineBrush;                                             // 0x0E18(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateColor                                 OutlineColor;                                             // 0x0EA0(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BorderBrush;                                              // 0x0EC8(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0F50(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ChildBackgroundBrush;                                     // 0x0FD8(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x0110 (0x0118 - 0x0008)
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x0220 (0x0228 - 0x0008)
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 TopShadowBrush;                                           // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BottomShadowBrush;                                        // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LeftShadowBrush;                                          // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 RightShadowBrush;                                         // 0x01A0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.DockTabStyle
// 0x06F8 (0x0700 - 0x0008)
struct FDockTabStyle : public FSlateWidgetStyle
{
	struct FButtonStyle                                CloseButtonStyle;                                         // 0x0008(0x0278) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalBrush;                                              // 0x0280(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ActiveBrush;                                              // 0x0308(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ColorOverlayTabBrush;                                     // 0x0390(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ColorOverlayIconBrush;                                    // 0x0418(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ForegroundBrush;                                          // 0x04A0(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x0528(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ContentAreaBrush;                                         // 0x05B0(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 TabWellBrush;                                             // 0x0638(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FMargin                                     TabPadding;                                               // 0x06C0(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	float                                              OverlapWidth;                                             // 0x06D0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x06D4(0x0004) MISSED OFFSET
	struct FSlateColor                                 FlashColor;                                               // 0x06D8(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x04C8 (0x04D0 - 0x0008)
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 SortPrimaryAscendingImage;                                // 0x0008(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SortPrimaryDescendingImage;                               // 0x0090(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SortSecondaryAscendingImage;                              // 0x0118(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 SortSecondaryDescendingImage;                             // 0x01A0(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalBrush;                                              // 0x0228(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredBrush;                                             // 0x02B0(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MenuDropdownImage;                                        // 0x0338(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MenuDropdownNormalBorderBrush;                            // 0x03C0(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MenuDropdownHoveredBorderBrush;                           // 0x0448(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.SplitterStyle
// 0x0110 (0x0118 - 0x0008)
struct FSplitterStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 HandleNormalBrush;                                        // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HandleHighlightBrush;                                     // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x0B68 (0x0B70 - 0x0008)
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	struct FTableColumnHeaderStyle                     ColumnStyle;                                              // 0x0008(0x04D0) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FTableColumnHeaderStyle                     LastColumnStyle;                                          // 0x04D8(0x04D0) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSplitterStyle                              ColumnSplitterStyle;                                      // 0x09A8(0x0118) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 BackgroundBrush;                                          // 0x0AC0(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                          // 0x0B48(0x0028) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x0090 (0x0098 - 0x0008)
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 Image;                                                    // 0x0008(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	int16_t                                            Baseline;                                                 // 0x0090(0x0002) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0092(0x0006) MISSED OFFSET
};

// ScriptStruct SlateCore.SliderStyle
// 0x0338 (0x0340 - 0x0008)
struct FSliderStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 NormalBarImage;                                           // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredBarImage;                                          // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DisabledBarImage;                                         // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NormalThumbImage;                                         // 0x01A0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HoveredThumbImage;                                        // 0x0228(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DisabledThumbImage;                                       // 0x02B0(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	float                                              BarThickness;                                             // 0x0338(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x033C(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x05E8 (0x05F0 - 0x0008)
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	struct FSliderStyle                                SliderStyle;                                              // 0x0008(0x0340) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 HighVolumeImage;                                          // 0x0348(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MidVolumeImage;                                           // 0x03D0(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 LowVolumeImage;                                           // 0x0458(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 NoVolumeImage;                                            // 0x04E0(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MutedImage;                                               // 0x0568(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x0A88 (0x0A90 - 0x0008)
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       TextBoxStyle;                                             // 0x0008(0x07F8) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateFontInfo                              ActiveFontInfo;                                           // 0x0800(0x0058) (CPF_Edit, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UpArrowImage;                                             // 0x0858(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 DownArrowImage;                                           // 0x08E0(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 GlassImage;                                               // 0x0968(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ClearImage;                                               // 0x09F0(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FMargin                                     ImagePadding;                                             // 0x0A78(0x0010) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	bool                                               bLeftAlignButtons;                                        // 0x0A88(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0A89(0x0007) MISSED OFFSET
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x0118 (0x0120 - 0x0008)
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 CollapsedImage;                                           // 0x0008(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 ExpandedImage;                                            // 0x0090(0x0088) (CPF_Edit, CPF_NativeAccessSpecifierPublic)
	float                                              RolloutAnimationSeconds;                                  // 0x0118(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x0198 (0x01A0 - 0x0008)
struct FProgressBarStyle : public FSlateWidgetStyle
{
	struct FSlateBrush                                 BackgroundImage;                                          // 0x0008(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 FillImage;                                                // 0x0090(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 MarqueeImage;                                             // 0x0118(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x0A68 (0x0A70 - 0x0008)
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	struct FEditableTextBoxStyle                       EditableTextBoxStyle;                                     // 0x0008(0x07F8) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FTextBlockStyle                             TextStyle;                                                // 0x0800(0x0270) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x0578 (0x0580 - 0x0008)
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	TEnumAsByte<ESlateCheckBoxType>                    CheckBoxType;                                             // 0x0008(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FSlateBrush                                 UncheckedImage;                                           // 0x0010(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UncheckedHoveredImage;                                    // 0x0098(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UncheckedPressedImage;                                    // 0x0120(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 CheckedImage;                                             // 0x01A8(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 CheckedHoveredImage;                                      // 0x0230(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 CheckedPressedImage;                                      // 0x02B8(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UndeterminedImage;                                        // 0x0340(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UndeterminedHoveredImage;                                 // 0x03C8(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateBrush                                 UndeterminedPressedImage;                                 // 0x0450(0x0088) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FMargin                                     Padding;                                                  // 0x04D8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSlateColor                                 ForegroundColor;                                          // 0x04E8(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateColor                                 BorderBackgroundColor;                                    // 0x0510(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_NativeAccessSpecifierPublic)
	struct FSlateSound                                 CheckedSlateSound;                                        // 0x0538(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSlateSound                                 UncheckedSlateSound;                                      // 0x0550(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
	struct FSlateSound                                 HoveredSlateSound;                                        // 0x0568(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_NoDestructor, CPF_NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
