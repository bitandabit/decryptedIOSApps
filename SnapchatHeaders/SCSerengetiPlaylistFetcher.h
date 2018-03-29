//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SCOperaPlaylistFetcher-Protocol.h"

@class NSString, Story;
@protocol SCOperaPlaylistFetcherDelegate;

@interface SCSerengetiPlaylistFetcher : NSObject <SCOperaPlaylistFetcher>
{
    NSString *_storyId;
    unsigned long long _loadingState;
    Story *_story;
    id <SCOperaPlaylistFetcherDelegate> _delegate;
}

@property(nonatomic) __weak id <SCOperaPlaylistFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)resolvedDataModels;
- (void)_setLoadingState:(unsigned long long)arg1;
- (unsigned long long)loadingState;
- (void)fetchPlaylist;
- (void)_handleLoadCompleteWithStory:(id)arg1 success:(_Bool)arg2;
- (id)currentLoadingProperties;
- (id)initWithStoryId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

