//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSError, NSURL;

@protocol HUBContentOperationContext
@property(readonly, nonatomic) NSError *previousError;
@property(readonly, nonatomic) id <HUBViewModelBuilder> viewModelBuilder;
@property(readonly, nonatomic) unsigned long long connectivityState;
@property(readonly, nonatomic) id <HUBFeatureInfo> featureInfo;
@property(readonly, copy, nonatomic) NSURL *viewURI;
@end

