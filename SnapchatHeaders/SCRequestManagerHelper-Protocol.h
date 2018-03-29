//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSObject, NSString, SCRequest;
@protocol OS_dispatch_queue, SCRequestAuthenticator, SCRequestParser;

@protocol SCRequestManagerHelper <NSObject>
+ (id)shared;
- (SCRequest *)submitRequestToEndpoint:(NSString *)arg1 parameters:(NSDictionary *)arg2 uploadData:(NSDictionary *)arg3 key:(NSString *)arg4 contexts:(NSArray *)arg5 requestParser:(id <SCRequestParser>)arg6 requestType:(long long)arg7 priority:(long long)arg8 method:(long long)arg9 authenticated:(_Bool)arg10 authenticator:(id <SCRequestAuthenticator>)arg11 completionQueue:(NSObject<OS_dispatch_queue> *)arg12 completionBlock:(void (^)(NSHTTPURLResponse *, id, NSError *))arg13;
- (SCRequest *)submitImmediateRequestToEndpoint:(NSString *)arg1 parameters:(NSDictionary *)arg2 uploadData:(NSDictionary *)arg3 key:(NSString *)arg4 contexts:(NSArray *)arg5 requestParser:(id <SCRequestParser>)arg6 requestType:(long long)arg7 method:(long long)arg8 authenticated:(_Bool)arg9 authenticator:(id <SCRequestAuthenticator>)arg10 maxNumRequestAttempts:(NSNumber *)arg11 successQueue:(NSObject<OS_dispatch_queue> *)arg12 failureQueue:(NSObject<OS_dispatch_queue> *)arg13 successBlock:(void (^)(NSHTTPURLResponse *, id))arg14 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg15;
- (SCRequest *)submitImmediateRequestToEndpoint:(NSString *)arg1 parameters:(NSDictionary *)arg2 uploadData:(NSDictionary *)arg3 key:(NSString *)arg4 contexts:(NSArray *)arg5 requestParser:(id <SCRequestParser>)arg6 requestType:(long long)arg7 method:(long long)arg8 authenticated:(_Bool)arg9 authenticator:(id <SCRequestAuthenticator>)arg10 successQueue:(NSObject<OS_dispatch_queue> *)arg11 failureQueue:(NSObject<OS_dispatch_queue> *)arg12 successBlock:(void (^)(NSHTTPURLResponse *, id))arg13 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg14;
- (SCRequest *)submitRequestToEndpoint:(NSString *)arg1 parameters:(NSDictionary *)arg2 uploadData:(NSDictionary *)arg3 key:(NSString *)arg4 contexts:(NSArray *)arg5 requestParser:(id <SCRequestParser>)arg6 requestType:(long long)arg7 priority:(long long)arg8 method:(long long)arg9 authenticated:(_Bool)arg10 authenticator:(id <SCRequestAuthenticator>)arg11 successQueue:(NSObject<OS_dispatch_queue> *)arg12 failureQueue:(NSObject<OS_dispatch_queue> *)arg13 successBlock:(void (^)(NSHTTPURLResponse *, id))arg14 failureBlock:(void (^)(NSHTTPURLResponse *, NSError *))arg15;
@end

