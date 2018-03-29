//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEDebuggableStyle.h"

@class GLUEGradientStyle, NSString, UIColor;

@interface GLUEHeaderBackgroundStyle : NSObject <GLUEDebuggableStyle>
{
    NSString *_debugName;
    UIColor *_tintColor;
    UIColor *_fadeOverlayColor;
    GLUEGradientStyle *_gradientOverlayStyle;
}

@property(copy, nonatomic) GLUEGradientStyle *gradientOverlayStyle; // @synthesize gradientOverlayStyle=_gradientOverlayStyle;
@property(copy, nonatomic) UIColor *fadeOverlayColor; // @synthesize fadeOverlayColor=_fadeOverlayColor;
@property(copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(copy, nonatomic) NSString *debugName; // @synthesize debugName=_debugName;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToHeaderBackgroundStyle:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
