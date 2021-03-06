//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTPlayerObserver.h"

@class NSCache, NSMutableDictionary, NSSet, NSString, NSURL, SPTDataLoader;

@interface SPTLyricsService : NSObject <SPTDataLoaderDelegate, SPTPlayerObserver>
{
    _Bool _currentTrackHasLyrics;
    SPTDataLoader *_dataLoader;
    NSCache *_trackIDsWithoutLyrics;
    NSCache *_memoryCache;
    NSMutableDictionary *_requestCallbacks;
    id <SPTPlayer> _player;
    NSURL *_currentContextURI;
    NSURL *_currentTrackURI;
    NSSet *_tracksWithLyricsForCurrentContext;
    id <SPTKaraokeManager> _karaokeManager;
}

@property(readonly, nonatomic) id <SPTKaraokeManager> karaokeManager; // @synthesize karaokeManager=_karaokeManager;
@property(retain, nonatomic) NSSet *tracksWithLyricsForCurrentContext; // @synthesize tracksWithLyricsForCurrentContext=_tracksWithLyricsForCurrentContext;
@property(nonatomic) _Bool currentTrackHasLyrics; // @synthesize currentTrackHasLyrics=_currentTrackHasLyrics;
@property(retain, nonatomic) NSURL *currentTrackURI; // @synthesize currentTrackURI=_currentTrackURI;
@property(retain, nonatomic) NSURL *currentContextURI; // @synthesize currentContextURI=_currentContextURI;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSMutableDictionary *requestCallbacks; // @synthesize requestCallbacks=_requestCallbacks;
@property(retain, nonatomic) NSCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(retain, nonatomic) NSCache *trackIDsWithoutLyrics; // @synthesize trackIDsWithoutLyrics=_trackIDsWithoutLyrics;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (id)trackIdentifierFromTrack:(id)arg1;
- (void)dealloc;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)fireFailureCallbacksForTrackId:(id)arg1 withError:(id)arg2;
- (id)requestCallbacksForTrackID:(id)arg1;
- (void)findTracksWithLyricsForContextInState:(id)arg1;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (id)errorWithCode:(long long)arg1 description:(id)arg2;
- (_Bool)lyricsAvailableForTrack:(id)arg1;
- (_Bool)lyricsAvailableForCurrentTrack:(id)arg1;
- (void)fetchLyricsForTrack:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchLyricsFromServerForTrackId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDataLoaderFactory:(id)arg1 player:(id)arg2 karaokeManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

