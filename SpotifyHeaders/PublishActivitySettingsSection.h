//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingsSection.h"

#import "SPTIncognitoModeHandlerObserver.h"
#import "SPTProductStateObserver.h"

@class NSString, SPTIncognitoModeHandler, SettingsSwitchTableViewCell;

@interface PublishActivitySettingsSection : SettingsSection <SPTIncognitoModeHandlerObserver, SPTProductStateObserver>
{
    SettingsSwitchTableViewCell *_cell;
    id <SPTProductState> _productState;
    SPTIncognitoModeHandler *_incognitoModeHandler;
}

@property(readonly, nonatomic) __weak SPTIncognitoModeHandler *incognitoModeHandler; // @synthesize incognitoModeHandler=_incognitoModeHandler;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) SettingsSwitchTableViewCell *cell; // @synthesize cell=_cell;
- (void).cxx_destruct;
- (void)incognitoModeHandler:(id)arg1 incognitoModeChangedByTimeout:(_Bool)arg2;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)syncSwitchControl;
- (void)enablePublishActivityChanged:(id)arg1;
- (void)dealloc;
@property(nonatomic) _Bool productStatePublishActivityValue;
- (id)footerText;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (unsigned long long)categoryPosition;
- (id)initWithSettingsViewController:(id)arg1 productState:(id)arg2 incognitoModeHandler:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
