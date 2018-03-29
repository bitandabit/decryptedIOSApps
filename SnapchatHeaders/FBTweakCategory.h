//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface FBTweakCategory : NSObject <NSCoding>
{
    NSMutableArray *_orderedCollections;
    NSMutableDictionary *_namedCollections;
    NSString *_name;
}

@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)removeTweakCollection:(id)arg1;
- (void)addTweakCollection:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *tweakCollections;
- (id)tweakCollectionWithName:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

