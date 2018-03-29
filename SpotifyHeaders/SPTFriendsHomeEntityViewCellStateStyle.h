//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUELabelStyle, NSString, UIColor;

@interface SPTFriendsHomeEntityViewCellStateStyle : NSObject <GLUEStyle>
{
    UIColor *_backgroundColor;
    GLUELabelStyle *_titleStyle;
    GLUELabelStyle *_subtitleStyle;
    double _textAlpha;
    double _imageAlpha;
}

+ (id)styleWithTheme:(id)arg1 state:(unsigned long long)arg2;
@property(nonatomic) double imageAlpha; // @synthesize imageAlpha=_imageAlpha;
@property(nonatomic) double textAlpha; // @synthesize textAlpha=_textAlpha;
@property(copy, nonatomic) GLUELabelStyle *subtitleStyle; // @synthesize subtitleStyle=_subtitleStyle;
@property(copy, nonatomic) GLUELabelStyle *titleStyle; // @synthesize titleStyle=_titleStyle;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
