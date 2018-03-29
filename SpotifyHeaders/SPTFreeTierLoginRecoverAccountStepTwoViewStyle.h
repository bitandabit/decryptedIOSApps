//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUEGradientStyle, GLUELabelStyle, NSString;

@interface SPTFreeTierLoginRecoverAccountStepTwoViewStyle : NSObject <GLUEStyle>
{
    GLUEGradientStyle *_backgroundGradientStyle;
    GLUELabelStyle *_titleHeaderStyle;
    GLUELabelStyle *_textBodyStyle;
    long long _stackViewAlignment;
    double _stackViewSpacing;
    double _stackViewTopMargin;
    double _stackViewHorizontalMargin;
    double _stackViewBottomMargin;
}

@property(nonatomic) double stackViewBottomMargin; // @synthesize stackViewBottomMargin=_stackViewBottomMargin;
@property(nonatomic) double stackViewHorizontalMargin; // @synthesize stackViewHorizontalMargin=_stackViewHorizontalMargin;
@property(nonatomic) double stackViewTopMargin; // @synthesize stackViewTopMargin=_stackViewTopMargin;
@property(nonatomic) double stackViewSpacing; // @synthesize stackViewSpacing=_stackViewSpacing;
@property(nonatomic) long long stackViewAlignment; // @synthesize stackViewAlignment=_stackViewAlignment;
@property(copy, nonatomic) GLUELabelStyle *textBodyStyle; // @synthesize textBodyStyle=_textBodyStyle;
@property(copy, nonatomic) GLUELabelStyle *titleHeaderStyle; // @synthesize titleHeaderStyle=_titleHeaderStyle;
@property(copy, nonatomic) GLUEGradientStyle *backgroundGradientStyle; // @synthesize backgroundGradientStyle=_backgroundGradientStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

