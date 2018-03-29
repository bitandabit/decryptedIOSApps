//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GLUEStyle.h"

@class GLUEButtonStyle, NSString;

@interface SPTFreeTierTasteOnboardingTrackSwipeIntroViewStyle : NSObject <GLUEStyle>
{
    GLUEButtonStyle *_primaryActionButtonStyle;
    GLUEButtonStyle *_secondaryActionButtonStyle;
    double _primaryActionButtonToSecondaryActionButtonMargin;
}

@property(nonatomic) double primaryActionButtonToSecondaryActionButtonMargin; // @synthesize primaryActionButtonToSecondaryActionButtonMargin=_primaryActionButtonToSecondaryActionButtonMargin;
@property(copy, nonatomic) GLUEButtonStyle *secondaryActionButtonStyle; // @synthesize secondaryActionButtonStyle=_secondaryActionButtonStyle;
@property(copy, nonatomic) GLUEButtonStyle *primaryActionButtonStyle; // @synthesize primaryActionButtonStyle=_primaryActionButtonStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
