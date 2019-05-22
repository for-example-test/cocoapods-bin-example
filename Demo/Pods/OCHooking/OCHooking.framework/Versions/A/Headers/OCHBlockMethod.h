//
//  NSRunLoop+OCHBlock.h
//  OCHooking
//
//  Created by tripleCC on 4/18/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface OCHBlockMethod: NSObject
+ (instancetype)methodWithSelector:(SEL)selector block:(id)block;
- (BOOL)isCompatibleWithSignature:(NSMethodSignature * _Nonnull)signature;
- (const char *)types;
- (SEL)selector;
- (IMP)imp;
@end


NS_ASSUME_NONNULL_END
