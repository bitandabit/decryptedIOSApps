//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTExternalIntegrationTestManager.h"
#import "SPTFeatureFlagSignalObserver.h"

@class NSString;

@interface SPTExternalIntegrationTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTExternalIntegrationTestManager>
{
    _Bool _showingEntityPagesEverywhereEnabled;
    _Bool _notShowingEntityPagesEnabled;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureFlagSignal> _showingEntityPageEverywhereFlagSignal;
    id <SPTFeatureFlagSignal> _showingEntityPageNowhereFlagSignal;
}

@property(readonly, nonatomic) id <SPTFeatureFlagSignal> showingEntityPageNowhereFlagSignal; // @synthesize showingEntityPageNowhereFlagSignal=_showingEntityPageNowhereFlagSignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> showingEntityPageEverywhereFlagSignal; // @synthesize showingEntityPageEverywhereFlagSignal=_showingEntityPageEverywhereFlagSignal;
@property(nonatomic, getter=isNotShowingEntityPagesEnabled) _Bool notShowingEntityPagesEnabled; // @synthesize notShowingEntityPagesEnabled=_notShowingEntityPagesEnabled;
@property(nonatomic, getter=isShowingEntityPagesEverywhereEnabled) _Bool showingEntityPagesEverywhereEnabled; // @synthesize showingEntityPagesEverywhereEnabled=_showingEntityPagesEverywhereEnabled;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) __weak id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (id)multipleChoiseFeatureFlagSignalsWithABBAKey:(id)arg1 withOptions:(id)arg2 settingsItemTitle:(id)arg3 settingsItemDescription:(id)arg4;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)dealloc;
- (void)setupFeatureFlags;
- (id)initWithFeatureFlagFactory:(id)arg1 localSettings:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

