//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BCOVVideo-Protocol.h"

@class BCOVCuePointCollection, NSArray, NSDictionary;

@protocol BCOVMutableVideo <BCOVVideo>
@property(copy, nonatomic) NSArray *sources;
@property(copy, nonatomic) NSDictionary *properties;
@property(copy, nonatomic) BCOVCuePointCollection *cuePoints;
@end

