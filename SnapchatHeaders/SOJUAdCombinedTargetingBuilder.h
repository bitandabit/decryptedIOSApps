//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SOJUAdTargeting;

@interface SOJUAdCombinedTargetingBuilder : NSObject
{
    SOJUAdTargeting *_track;
    SOJUAdTargeting *_ad;
}

+ (id)withJUAdCombinedTargeting:(id)arg1;
- (void).cxx_destruct;
- (id)setAd:(id)arg1;
- (id)setTrack:(id)arg1;
- (id)build;

@end

