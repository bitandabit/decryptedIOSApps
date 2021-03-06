//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTEpisodeContextMenuControllerDelegate.h"
#import "SPTPodcastPlayerDelegate.h"

@class NSMutableArray, NSString, NSURL;

@interface SPTCollectionEpisodesViewModel : NSObject <SPTPodcastPlayerDelegate, SPTEpisodeContextMenuControllerDelegate>
{
    _Bool _isLoading;
    _Bool _isLoaded;
    _Bool _grouped;
    id <SPTCollectionEpisodesViewModelDelegate> _delegate;
    NSURL *_URL;
    long long _currentMediaType;
    long long _pageType;
    id <SPTPodcastDataLoader> _dataLoader;
    id <SPTPodcastPlayer> _player;
    id <SPTOfflineManager> _offlineManager;
    id <SPTLocalSettings> _localSettings;
    id <SPTAbbaFeatureFlags> _featureFlags;
    NSMutableArray *_entries;
    NSMutableArray *_episodes;
    id <SPTCrashReporter> _crashReporter;
}

@property(retain, nonatomic) id <SPTCrashReporter> crashReporter; // @synthesize crashReporter=_crashReporter;
@property(retain, nonatomic) NSMutableArray *episodes; // @synthesize episodes=_episodes;
@property(retain, nonatomic) NSMutableArray *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) id <SPTAbbaFeatureFlags> featureFlags; // @synthesize featureFlags=_featureFlags;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(retain, nonatomic) id <SPTPodcastPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTPodcastDataLoader> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic, getter=isGrouped) _Bool grouped; // @synthesize grouped=_grouped;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
@property(nonatomic) long long currentMediaType; // @synthesize currentMediaType=_currentMediaType;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTCollectionEpisodesViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadLocalSettings;
- (id)localSettingsStringWithKey:(id)arg1;
- (void)podcastPlayer:(id)arg1 didChangePlayingTrackURL:(id)arg2;
- (void)offlineEpisode:(id)arg1 offline:(_Bool)arg2;
- (void)markAsPlayedEpisode:(id)arg1 markAsPlayed:(_Bool)arg2;
- (id)markAsPlayedAndRemoveEpisodeAtIndexPath:(id)arg1;
- (_Bool)isPlayingEpisodeAtIndexPath:(id)arg1;
- (void)playEpisodeAtIndexPath:(id)arg1;
- (id)entryAtIndexPath:(id)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfEntriesInSection:(unsigned long long)arg1;
- (id)headerForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfEntrySections;
- (void)parseData:(id)arg1 intoArray:(id)arg2 withHeaderItem:(id)arg3;
- (void)parseUnfinishedEpisodeData:(id)arg1 intoArray:(id)arg2 withHeaderItem:(id)arg3;
- (id)parseJSONData:(id)arg1;
- (void)unsubscribe;
- (void)loadAndSubscribe;
@property(readonly, nonatomic, getter=isStandAlonePage) _Bool standAlonePage;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (id)initWithURL:(id)arg1 dataLoader:(id)arg2 player:(id)arg3 offlineManager:(id)arg4 localSettings:(id)arg5 pageType:(long long)arg6 featureFlags:(id)arg7 crashReporter:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

