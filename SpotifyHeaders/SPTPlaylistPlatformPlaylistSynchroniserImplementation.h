//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTPlaylistPlatformPlaylistSynchroniser.h"

@class NSMutableOrderedSet, NSMutableSet, NSString;

@interface SPTPlaylistPlatformPlaylistSynchroniserImplementation : NSObject <SPTPlaylistPlatformPlaylistSynchroniser>
{
    _Bool _isSynchronizing;
    NSMutableOrderedSet *_itemsToSynchronize;
    NSMutableSet *_itemsSynchronized;
    long long _totalSynchronized;
    id <SPTPlaylistModel> _playlistModel;
}

@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(nonatomic) long long totalSynchronized; // @synthesize totalSynchronized=_totalSynchronized;
@property(retain, nonatomic) NSMutableSet *itemsSynchronized; // @synthesize itemsSynchronized=_itemsSynchronized;
@property(retain, nonatomic) NSMutableOrderedSet *itemsToSynchronize; // @synthesize itemsToSynchronize=_itemsToSynchronize;
@property(nonatomic) _Bool isSynchronizing; // @synthesize isSynchronizing=_isSynchronizing;
- (void).cxx_destruct;
- (void)markPlaylistForSynchronizationWithURL:(id)arg1;
- (void)unmarkPlaylistForSynchronizationWithURL:(id)arg1;
- (void)synchronizeItems;
- (void)startSynchronizationWithInterval:(double)arg1;
- (id)initWithPlaylistModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

