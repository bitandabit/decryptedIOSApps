//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface SCGallerySendItemsVideoSegmentHelper : NSObject
{
    NSMutableArray *_queue;
    NSMutableDictionary *_segmentURLsMap;
}

- (void).cxx_destruct;
- (void)_processQueueItem;
- (void)segmentVideoSnap:(id)arg1 encryptedContentManager:(id)arg2 cloudFileContainer:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)segmentVideoAsset:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)init;

@end

