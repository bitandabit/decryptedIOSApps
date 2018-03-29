//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface FBObjectGraphConfiguration : NSObject
{
    _Bool _shouldInspectTimers;
    _Bool _shouldIncludeBlockAddress;
    _Bool _shouldCacheLayouts;
    NSArray *_filterBlocks;
    CDUnknownBlockType _transformerBlock;
    NSMutableDictionary *_layoutCache;
}

@property(readonly, nonatomic) _Bool shouldCacheLayouts; // @synthesize shouldCacheLayouts=_shouldCacheLayouts;
@property(readonly, nonatomic) NSMutableDictionary *layoutCache; // @synthesize layoutCache=_layoutCache;
@property(readonly, nonatomic) _Bool shouldIncludeBlockAddress; // @synthesize shouldIncludeBlockAddress=_shouldIncludeBlockAddress;
@property(readonly, nonatomic) _Bool shouldInspectTimers; // @synthesize shouldInspectTimers=_shouldInspectTimers;
@property(readonly, copy, nonatomic) CDUnknownBlockType transformerBlock; // @synthesize transformerBlock=_transformerBlock;
@property(readonly, copy, nonatomic) NSArray *filterBlocks; // @synthesize filterBlocks=_filterBlocks;
- (void).cxx_destruct;
- (id)init;
- (id)initWithFilterBlocks:(id)arg1 shouldInspectTimers:(_Bool)arg2;
- (id)initWithFilterBlocks:(id)arg1 shouldInspectTimers:(_Bool)arg2 transformerBlock:(CDUnknownBlockType)arg3;
- (id)initWithFilterBlocks:(id)arg1 shouldInspectTimers:(_Bool)arg2 transformerBlock:(CDUnknownBlockType)arg3 shouldIncludeBlockAddress:(_Bool)arg4;

@end
