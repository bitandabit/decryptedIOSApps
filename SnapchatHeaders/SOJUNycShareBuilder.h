//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SOJUNycShareBuilder : NSObject
{
    NSString *_storyId;
    NSString *_mediaType;
    NSString *_poiId;
}

+ (id)withJUNycShare:(id)arg1;
- (void).cxx_destruct;
- (id)setPoiId:(id)arg1;
- (id)setMediaType:(id)arg1;
- (id)setStoryId:(id)arg1;
- (id)build;

@end

