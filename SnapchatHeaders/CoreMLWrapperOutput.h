//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MLFeatureProvider-Protocol.h"

@class NSMutableDictionary, NSSet;

@interface CoreMLWrapperOutput : NSObject <MLFeatureProvider>
{
    NSMutableDictionary *_multiArrayDict;
    NSSet *_nameSet;
}

@property(retain, nonatomic) NSSet *nameSet; // @synthesize nameSet=_nameSet;
@property(retain, nonatomic) NSMutableDictionary *multiArrayDict; // @synthesize multiArrayDict=_multiArrayDict;
- (void).cxx_destruct;
- (id)featureValueForName:(id)arg1;
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithOutputNameSet:(id)arg1;

@end

