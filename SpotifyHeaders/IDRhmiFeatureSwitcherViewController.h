//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDApplicationDelegate.h"
#import "IDApplicationExtendedDataSource.h"
#import "IDTableDelegate.h"

@class IDApplication, IDRhmiFeatureInfoFilter, IDRhmiFeatureSwitcherInfoViewController, IDRhmiFeatureSwitcherViewControllerConfiguration, IDRhmiSubmenu, NSSet, NSString;

@interface IDRhmiFeatureSwitcherViewController : NSObject <IDApplicationExtendedDataSource, IDApplicationDelegate, IDTableDelegate>
{
    _Bool _appswitchInProgress;
    NSSet *_featureInfos;
    IDRhmiFeatureSwitcherViewControllerConfiguration *_configuration;
    IDRhmiFeatureSwitcherInfoViewController *_infoViewController;
    long long _hmiLanguage;
    IDApplication *_application;
    id _willResignActiveNotificationObserver;
    id _didBecomeActiveNotificationObserver;
    id _didOpenUrlNotificationObserver;
    id _didFailToOpenUrlNotificationObserver;
}

+ (id)new;
@property _Bool appswitchInProgress; // @synthesize appswitchInProgress=_appswitchInProgress;
@property(retain) id didFailToOpenUrlNotificationObserver; // @synthesize didFailToOpenUrlNotificationObserver=_didFailToOpenUrlNotificationObserver;
@property(retain) id didOpenUrlNotificationObserver; // @synthesize didOpenUrlNotificationObserver=_didOpenUrlNotificationObserver;
@property(retain) id didBecomeActiveNotificationObserver; // @synthesize didBecomeActiveNotificationObserver=_didBecomeActiveNotificationObserver;
@property(retain) id willResignActiveNotificationObserver; // @synthesize willResignActiveNotificationObserver=_willResignActiveNotificationObserver;
@property(retain) IDApplication *application; // @synthesize application=_application;
@property long long hmiLanguage; // @synthesize hmiLanguage=_hmiLanguage;
@property(retain) IDRhmiFeatureSwitcherInfoViewController *infoViewController; // @synthesize infoViewController=_infoViewController;
@property(retain) IDRhmiFeatureSwitcherViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain) NSSet *featureInfos; // @synthesize featureInfos=_featureInfos;
- (void).cxx_destruct;
- (_Bool)shouldShowSwitcherNotAvailableHint;
- (void)updateAppswitchInProgress:(_Bool)arg1;
- (void)table:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)onUpdateLanguage:(id)arg1;
- (_Bool)shouldRegisterForApplicationLaunch;
- (id)imageDatabasesForApplication:(id)arg1;
- (id)textDatabasesForApplication:(id)arg1;
- (id)hmiDescriptionForApplication:(id)arg1;
- (id)manifestForApplication:(id)arg1;
- (void)applicationDidStart:(id)arg1;
- (void)applicationRestoreMainHmiState:(id)arg1;
- (void)updateUI;
- (void)update:(id)arg1;
- (void)stopWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startWithFeatureInfos:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
@property(readonly) IDRhmiFeatureInfoFilter *featureInfosFilter;
@property(readonly) IDRhmiSubmenu *submenu;
- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

