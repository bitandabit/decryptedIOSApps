//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ZZChannel-Protocol.h"

@class NSData, NSURL;

@interface ZZDataChannel : NSObject <ZZChannel>
{
    NSData *_allData;
}

- (void).cxx_destruct;
- (id)newOutput:(out id *)arg1;
- (id)newInput:(out id *)arg1;
- (void)removeAsTemporary;
- (_Bool)replaceWithChannel:(id)arg1 error:(out id *)arg2;
- (id)temporaryChannel:(out id *)arg1;
@property(readonly, nonatomic) NSURL *URL;
- (id)initWithData:(id)arg1;

@end

