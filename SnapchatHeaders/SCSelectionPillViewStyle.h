//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont, UIImage;

@interface SCSelectionPillViewStyle : NSObject
{
    double _cachedRenderWidth;
    UIFont *_font;
    UIColor *_fillColor;
    UIColor *_strokeColor;
    double _strokeWidth;
    UIImage *_leftIcon;
    UIImage *_rightIcon;
    double _innerPadding;
    double _outerPadding;
    UIColor *_textColor;
    NSString *_text;
    struct CGSize _iconSize;
}

@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double outerPadding; // @synthesize outerPadding=_outerPadding;
@property(nonatomic) double innerPadding; // @synthesize innerPadding=_innerPadding;
@property(retain, nonatomic) UIImage *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) UIImage *leftIcon; // @synthesize leftIcon=_leftIcon;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) double renderWidth;
- (id)init;

@end

