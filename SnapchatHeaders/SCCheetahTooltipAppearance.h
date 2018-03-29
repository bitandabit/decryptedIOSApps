//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont;

@interface SCCheetahTooltipAppearance : NSObject
{
    _Bool _respectsRTLLayout;
    NSString *_text;
    UIColor *_textColor;
    UIColor *_backgroundColor;
    UIFont *_font;
    double _shadowOpacity;
    double _shadowRadius;
    NSString *_accessibilityIdentifier;
}

@property(copy, nonatomic) NSString *accessibilityIdentifier; // @synthesize accessibilityIdentifier=_accessibilityIdentifier;
@property(nonatomic) _Bool respectsRTLLayout; // @synthesize respectsRTLLayout=_respectsRTLLayout;
@property(readonly, nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(readonly, nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(readonly, nonatomic) UIFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)initWithText:(id)arg1 textColor:(id)arg2 backgroundColor:(id)arg3;
- (id)initWithText:(id)arg1;

@end

