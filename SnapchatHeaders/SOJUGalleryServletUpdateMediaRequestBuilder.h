//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber;

@interface SOJUGalleryServletUpdateMediaRequestBuilder : NSObject
{
    NSArray *_media;
    NSNumber *_storageVersionDeprecated;
}

+ (id)withJUGalleryServletUpdateMediaRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setStorageVersionDeprecated:(id)arg1;
- (id)setMedia:(id)arg1;
- (id)build;
- (id)setStorageVersionDeprecatedValue:(int)arg1;

@end
