//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryServletGetUploadUrlsRequestBuilder : NSObject
{
    NSArray *_ids;
    NSNumber *_type;
    NSNumber *_storageVersionDeprecated;
    NSString *_storageType;
}

+ (id)withJUGalleryServletGetUploadUrlsRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setStorageType:(id)arg1;
- (id)setStorageVersionDeprecated:(id)arg1;
- (id)setType:(id)arg1;
- (id)setIds:(id)arg1;
- (id)build;
- (id)setStorageTypeEnum:(long long)arg1;
- (id)setStorageVersionDeprecatedValue:(int)arg1;
- (id)setTypeEnum:(long long)arg1;
- (id)setTypeValue:(int)arg1;

@end
