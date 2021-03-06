//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTPlayOrigin;

@protocol SPTFreeTierPlaylistModel <NSObject>
@property(readonly, nonatomic) _Bool loadError;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
@property(nonatomic) __weak id <SPTFreeTierPlaylistModelDelegate> delegate;
- (void)deletePlaylist;
- (void)changeFollowState:(_Bool)arg1;
- (void)playTrackEntity:(id <SPTFreeTierPlaylistModelEntityTrackFields>)arg1 andPlayOrigin:(SPTPlayOrigin *)arg2;
- (void)playWithPlayOrigin:(SPTPlayOrigin *)arg1;
- (void)shufflePlayWithPlayOrigin:(SPTPlayOrigin *)arg1;
- (void)load;
@end

