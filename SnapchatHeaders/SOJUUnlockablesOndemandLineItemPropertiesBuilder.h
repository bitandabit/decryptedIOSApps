//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SOJUUnlockablesOndemandLineItemPropertiesBuilder : NSObject
{
    NSString *_usageType;
    NSString *_purchaserTimezone;
    NSString *_displayName;
    NSString *_sponsoredBrandName;
}

+ (id)withJUUnlockablesOndemandLineItemProperties:(id)arg1;
- (void).cxx_destruct;
- (id)setSponsoredBrandName:(id)arg1;
- (id)setDisplayName:(id)arg1;
- (id)setPurchaserTimezone:(id)arg1;
- (id)setUsageType:(id)arg1;
- (id)build;
- (id)setUsageTypeEnum:(long long)arg1;

@end
