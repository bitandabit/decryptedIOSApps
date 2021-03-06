//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface SOJUAdClientRankingModelOutputBuilder : NSObject
{
    NSString *_modelId;
    NSNumber *_score;
    NSNumber *_inferenceLatency;
    NSNumber *_loadingLatency;
    NSString *_error;
}

+ (id)withJUAdClientRankingModelOutput:(id)arg1;
- (void).cxx_destruct;
- (id)setError:(id)arg1;
- (id)setLoadingLatency:(id)arg1;
- (id)setInferenceLatency:(id)arg1;
- (id)setScore:(id)arg1;
- (id)setModelId:(id)arg1;
- (id)build;
- (id)setLoadingLatencyValue:(long long)arg1;
- (id)setInferenceLatencyValue:(long long)arg1;
- (id)setScoreValue:(float)arg1;

@end

