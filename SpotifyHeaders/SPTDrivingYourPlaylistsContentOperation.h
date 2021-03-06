//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HUBContentOperation.h"

@class SPTPlaylistPlatformFolderResponse;

@interface SPTDrivingYourPlaylistsContentOperation : NSObject <HUBContentOperation>
{
    id <HUBContentOperationDelegate> _delegate;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTPlaylistPlatformDataLoaderRequestToken> _subscriptionToken;
    SPTPlaylistPlatformFolderResponse *_latestResponse;
}

@property(retain, nonatomic) SPTPlaylistPlatformFolderResponse *latestResponse; // @synthesize latestResponse=_latestResponse;
@property(retain, nonatomic) id <SPTPlaylistPlatformDataLoaderRequestToken> subscriptionToken; // @synthesize subscriptionToken=_subscriptionToken;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(nonatomic) __weak id <HUBContentOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupComponentsAndFinishWithPlaylists:(id)arg1 viewModelBuilder:(id)arg2;
- (void)performForViewURI:(id)arg1 featureInfo:(id)arg2 connectivityState:(unsigned long long)arg3 viewModelBuilder:(id)arg4 previousError:(id)arg5;
- (void)dealloc;
- (id)initWithPlaylistDataLoader:(id)arg1;

@end

