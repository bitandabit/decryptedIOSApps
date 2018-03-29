//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTCollectionPlatformTestManager.h"
#import "SPTFeatureFlagSignalObserver.h"

@class NSString;

@interface SPTCollectionPlatformTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTCollectionPlatformTestManager>
{
    _Bool _incompleteAlbumsUsedForCollectionState;
    _Bool _freeTierYourLibraryEnabled;
    _Bool _freeTierEnabled;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTProductState> _productState;
    id <SPTAbbaFeatureFlags> _abbaFeatureFlags;
    id <SPTLocalSettings> _localSettings;
    id <SettingsRegistry> _settingsRegistry;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTNavigationConfiguration> _navigationConfiguration;
    id <SPTFeatureFlagSignal> _freeTierEnabledSignal;
    id <SPTFeatureFlagSignal> _freeTierYourLibrarySignal;
    id <SPTFreeTierEducationSnackBarPresenter> _snackbarEducationPresenter;
}

@property(retain, nonatomic) id <SPTFreeTierEducationSnackBarPresenter> snackbarEducationPresenter; // @synthesize snackbarEducationPresenter=_snackbarEducationPresenter;
@property(nonatomic, getter=isFreeTierEnabled) _Bool freeTierEnabled; // @synthesize freeTierEnabled=_freeTierEnabled;
@property(nonatomic, getter=isFreeTierYourLibraryEnabled) _Bool freeTierYourLibraryEnabled; // @synthesize freeTierYourLibraryEnabled=_freeTierYourLibraryEnabled;
@property(nonatomic, getter=isIncompleteAlbumsUsedForCollectionState) _Bool incompleteAlbumsUsedForCollectionState; // @synthesize incompleteAlbumsUsedForCollectionState=_incompleteAlbumsUsedForCollectionState;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> freeTierYourLibrarySignal; // @synthesize freeTierYourLibrarySignal=_freeTierYourLibrarySignal;
@property(readonly, nonatomic) id <SPTFeatureFlagSignal> freeTierEnabledSignal; // @synthesize freeTierEnabledSignal=_freeTierEnabledSignal;
@property(readonly, nonatomic) id <SPTNavigationConfiguration> navigationConfiguration; // @synthesize navigationConfiguration=_navigationConfiguration;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SettingsRegistry> settingsRegistry; // @synthesize settingsRegistry=_settingsRegistry;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTAbbaFeatureFlags> abbaFeatureFlags; // @synthesize abbaFeatureFlags=_abbaFeatureFlags;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
- (void).cxx_destruct;
- (void)setUpLocalSettings;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, nonatomic, getter=isPremiumLabelEnabled) _Bool premiumLabelEnabled;
@property(readonly, getter=isFollowedArtistsOnlyEnabled) _Bool followedArtistsOnlyEnabled;
@property(readonly, getter=isBookmarkModelEnabled) _Bool bookmarkModelEnabled;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
@property(readonly, nonatomic, getter=isYourLibraryFeatureEnabled) _Bool yourLibraryFeatureEnabled;
- (void)setupFreeTierYourLibrarySignal;
- (void)dealloc;
- (id)initWithProductState:(id)arg1 abbaFeatureFlags:(id)arg2 localSettings:(id)arg3 settingsRegistry:(id)arg4 featureSettingsItemFactory:(id)arg5 featureFlagFactory:(id)arg6 navigationConfiguration:(id)arg7 freeTierEnabledSignal:(id)arg8 educationPresenter:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

