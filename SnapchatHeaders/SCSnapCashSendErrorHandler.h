//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SCSnapCashSendErrorHandler : NSObject
{
    _Bool _swipeToResolve;
}

@property(nonatomic) _Bool swipeToResolve; // @synthesize swipeToResolve=_swipeToResolve;
- (void)handleError:(id)arg1 recipient:(id)arg2 status:(long long)arg3;
- (id)initWithSwipeToResolve:(_Bool)arg1;

@end

