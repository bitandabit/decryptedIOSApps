//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, SPTNowPlayingCoverArtView, SPTNowPlayingCoverArtViewCell, UIImage;

@protocol SPTNowPlayingCoverArtViewDelegate <NSObject>
- (void)nowPlayingCoverArtView:(SPTNowPlayingCoverArtView *)arg1 coverArtCellWasTouchedUpInside:(SPTNowPlayingCoverArtViewCell *)arg2;
- (void)nowPlayingCoverArtView:(SPTNowPlayingCoverArtView *)arg1 didLoadStagedContextImageURL:(NSURL *)arg2 image:(UIImage *)arg3;
- (void)nowPlayingCoverArtViewDidChangeCoverArtForAllPages:(SPTNowPlayingCoverArtView *)arg1 currentRelativePage:(long long)arg2;
- (void)nowPlayingCoverArtView:(SPTNowPlayingCoverArtView *)arg1 didScrollToRelativePage:(long long)arg2 interactively:(_Bool)arg3 dragging:(_Bool)arg4;
- (void)nowPlayingCoverArtView:(SPTNowPlayingCoverArtView *)arg1 willScrollToRelativePage:(long long)arg2 fromRelativePage:(long long)arg3 interactively:(_Bool)arg4 dragging:(_Bool)arg5;
- (void)nowPlayingCoverArtView:(SPTNowPlayingCoverArtView *)arg1 didAttemptScrollToRelativePage:(long long)arg2;
- (void)nowPlayingCoverArtView:(SPTNowPlayingCoverArtView *)arg1 didScrollToRelativePagePosition:(double)arg2;
@end

