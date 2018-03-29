//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SCLensCategoryBuilder : NSObject
{
    NSString *_categoryId;
    NSString *_name;
    NSString *_activator;
    NSString *_config;
    NSString *_configChecksum;
    NSArray *_additionalCarouselCategories;
}

+ (id)withLensCategory:(id)arg1;
- (void).cxx_destruct;
- (id)setAdditionalCarouselCategories:(id)arg1;
- (id)setConfigChecksum:(id)arg1;
- (id)setConfig:(id)arg1;
- (id)setActivator:(id)arg1;
- (id)setName:(id)arg1;
- (id)setCategoryId:(id)arg1;
- (id)build;

@end

