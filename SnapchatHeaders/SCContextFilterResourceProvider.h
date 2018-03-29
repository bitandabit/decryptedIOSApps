//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, SCCache, SCQueuePerformer, SCUserSession, SOJUContextFilterMetadata;

@interface SCContextFilterResourceProvider : NSObject
{
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_contextFilterMetadata;
    SOJUContextFilterMetadata *_sojuMetadataInUse;
    NSDate *_lastCheckTimestamp;
    SCCache *_cache;
    _Bool _forceUseExistingMetadata;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_cacheImage:(id)arg1 forKey:(id)arg2;
- (void)_fetchImageWithURLString:(id)arg1 key:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)_fetchSingleSkyItem:(id)arg1 URLString:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)_fetchContextFilterMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setSOJUMetadataInUse:(id)arg1;
- (_Bool)_isMetadataValid:(id)arg1;
- (void)_fetchContextFilterResourceFromLocalAndServer:(CDUnknownBlockType)arg1;
- (void)_checkContextFilterMetadataAndUpdateImagesIfNeeded:(CDUnknownBlockType)arg1;
- (void)_updateLastCheckTimestamp;
- (_Bool)_isContextFilterMetadataTTLExpired;
- (void)clearMemoryCache;
- (void)setContextFilterMetadataFromSOJUMetadata:(id)arg1;
- (id)contextFilterMetadata;
- (void)contextFilterResourceForSkyItem:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)fetchContextFilterResource:(CDUnknownBlockType)arg1;
- (id)initWithUserSession:(id)arg1;

@end

