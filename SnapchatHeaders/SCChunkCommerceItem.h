//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCChunkItem.h"

@class NSMutableDictionary;

@interface SCChunkCommerceItem : SCChunkItem
{
    NSMutableDictionary *_attachmentProperties;
}

- (void).cxx_destruct;
- (unsigned long long)commerceAttachmentTypeForTypeString:(id)arg1;
- (id)topSnapProperties;
- (id)_baseProperties;
- (id)attachmentProperties;
- (void)saveMediaToCache;
- (id)cacheMediaIds;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 chunkDictionary:(id)arg2;

@end

