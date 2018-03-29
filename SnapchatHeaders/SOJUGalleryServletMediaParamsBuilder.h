//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface SOJUGalleryServletMediaParamsBuilder : NSObject
{
    NSNumber *_mediaType;
    NSString *_mediaId;
    NSString *_mediaMd5hash;
    NSNumber *_size;
    NSNumber *_createTime;
    NSString *_mediaFormat;
}

+ (id)withJUGalleryServletMediaParams:(id)arg1;
- (void).cxx_destruct;
- (id)setMediaFormat:(id)arg1;
- (id)setCreateTime:(id)arg1;
- (id)setSize:(id)arg1;
- (id)setMediaMd5hash:(id)arg1;
- (id)setMediaId:(id)arg1;
- (id)setMediaType:(id)arg1;
- (id)build;
- (id)setMediaFormatEnum:(long long)arg1;
- (id)setCreateTimeValue:(long long)arg1;
- (id)setSizeValue:(long long)arg1;
- (id)setMediaTypeEnum:(long long)arg1;
- (id)setMediaTypeValue:(int)arg1;

@end

