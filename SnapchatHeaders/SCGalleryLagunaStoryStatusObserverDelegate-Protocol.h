//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCGalleryLagunaStoryStatusObserver;

@protocol SCGalleryLagunaStoryStatusObserverDelegate <NSObject>
- (void)storyLoadingStatusObserver:(SCGalleryLagunaStoryStatusObserver *)arg1 didUpdateContentLoadingProgress:(double)arg2 numberTransferring:(unsigned long long)arg3 currentlyTransferringContentProgress:(double)arg4;
- (void)storyLoadingStatusObserver:(SCGalleryLagunaStoryStatusObserver *)arg1 didUpdateContentLoadingStatus:(long long)arg2;
@end
