//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface SOJUGallerySnapSourceBuilder : NSObject
{
    NSNumber *_type;
    NSArray *_attribution;
    NSString *_cameraRollId;
    NSString *_externalId;
}

+ (id)withJUGallerySnapSource:(id)arg1;
- (void).cxx_destruct;
- (id)setExternalId:(id)arg1;
- (id)setCameraRollId:(id)arg1;
- (id)setAttribution:(id)arg1;
- (id)setType:(id)arg1;
- (id)build;
- (id)setTypeEnum:(long long)arg1;
- (id)setTypeValue:(int)arg1;

@end
