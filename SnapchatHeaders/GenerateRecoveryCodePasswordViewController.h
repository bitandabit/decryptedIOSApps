//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GenericSettingsPasswordViewController.h"

@class SCReauthenticationManager;

@interface GenerateRecoveryCodePasswordViewController : GenericSettingsPasswordViewController
{
    SCReauthenticationManager *_reauthenticationManager;
}

- (void).cxx_destruct;
- (_Bool)disableLeftSwipe;
- (void)continueButtonBarPressed:(id)arg1;
- (id)getInfo;
- (id)getTitle;
- (id)getPageViewName;
- (id)initWithUserSession:(id)arg1 reauthenticationManager:(id)arg2;

@end

