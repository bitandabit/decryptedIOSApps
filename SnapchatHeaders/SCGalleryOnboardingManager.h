//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SCUserProperties_DEPRECATED, SCUserSession;

@interface SCGalleryOnboardingManager : NSObject
{
    SCUserSession *_userSession;
    SCUserProperties_DEPRECATED *_userProperties;
}

- (void).cxx_destruct;
- (void)didFinishShowOnboardingForAutoEnableGallery;
- (void)autoEnableGalleryIfNeeded;
- (_Bool)shouldShowOnboarding;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1;

@end

