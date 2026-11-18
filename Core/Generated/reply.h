/*
 * Generated with EmbeddedProto.
 * Licensed to: Embedded AMS B.V.
 *
 * This header is provided as part of an EmbeddedProto license.
 */
/*
 *  This file is generated with Embedded Proto, PLEASE DO NOT EDIT!
 *  source: reply.proto
 *  Generated on: 2026-09-24T15:54:58 
 */

// This file is generated. Please do not edit!
#ifndef REPLY_H
#define REPLY_H

#include <cstdint>
#include <EmbeddedProto/Version.h>

//! The major version number of the Embedded Proto generator used to create this file.
#define REPLY_GENERATOR_VERSION_MAJOR 4

//! The minor version number of the Embedded Proto generator used to create this file.
#define REPLY_GENERATOR_VERSION_MINOR 0

//! The patch version number of the Embedded Proto generator used to create this file.
#define REPLY_GENERATOR_VERSION_PATCH 0

static_assert(REPLY_GENERATOR_VERSION_MAJOR == EMBEDDEDPROTO_VERSION_MAJOR,
    "Major version mismatch between generated code and library");

#if REPLY_GENERATOR_VERSION_MINOR != EMBEDDEDPROTO_VERSION_MINOR
#warning "Minor version mismatch between generated code and library"
#endif

#include <EmbeddedProto/MessageInterface.h>
#include <EmbeddedProto/WireFormatter.h>
#include <EmbeddedProto/Fields.h>
#include <EmbeddedProto/MessageSizeCalculator.h>
#include <EmbeddedProto/ReadBufferSection.h>
#include <EmbeddedProto/RepeatedFieldFixedSize.h>
#include <EmbeddedProto/RepeatedFieldCallback.h>
#include <EmbeddedProto/MessageCallback.h>
#include <EmbeddedProto/FieldStringBytes.h>
#include <EmbeddedProto/BytesStringCallback.h>
#include <EmbeddedProto/Errors.h>
#include <EmbeddedProto/Defines.h>
#include <limits>
#include <type_traits>

// Include external proto definitions

namespace demo {

class A final: public ::EmbeddedProto::MessageInterface
{
  public:
    A() = default;
    A(const A& rhs )
    {
      set_x(rhs.get_x());
      set_y(rhs.get_y());
      set_z(rhs.get_z());
    }

    A(const A&& rhs ) noexcept
    {
      set_x(rhs.get_x());
      set_y(rhs.get_y());
      set_z(rhs.get_z());
    }

    ~A() = default;

    //! The full protobuf name of this message type, the name used in the type url of a google.protobuf.Any.
    static constexpr char const* MESSAGE_FULL_NAME = "demo.A";

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      X = 1,
      Y = 2,
      Z = 3
    };

#ifdef PARTIAL_SERIALIZATION_ENABLED
    //! State depth for partial serialization.
    static constexpr uint32_t STATE_DEPTH = 1;
    
    //! Convenience typedef for the state stack.
    using StateStack = ::EmbeddedProto::MessageStateStack<STATE_DEPTH>;
#endif

    A& operator=(const A& rhs)
    {
      
      set_x(rhs.get_x());
      set_y(rhs.get_y());
      set_z(rhs.get_z());
      return *this;
    }

    A& operator=(const A&& rhs) noexcept
    {
      
      set_x(rhs.get_x());
      set_y(rhs.get_y());
      set_z(rhs.get_z());
      return *this;
    }

    static constexpr char const* X_NAME = "x";
    inline void clear_x() { x_.clear(); }
    inline void set_x(const uint32_t& value) { x_ = value; }
    inline void set_x(const uint32_t&& value) { x_ = value; }
    inline uint32_t& mutable_x() { return x_.get(); }
    inline const uint32_t& get_x() const { return x_.get(); }
    inline uint32_t x() const { return x_.get(); }

    static constexpr char const* Y_NAME = "y";
    inline void clear_y() { y_.clear(); }
    inline void set_y(const uint32_t& value) { y_ = value; }
    inline void set_y(const uint32_t&& value) { y_ = value; }
    inline uint32_t& mutable_y() { return y_.get(); }
    inline const uint32_t& get_y() const { return y_.get(); }
    inline uint32_t y() const { return y_.get(); }

    static constexpr char const* Z_NAME = "z";
    inline void clear_z() { z_.clear(); }
    inline void set_z(const uint32_t& value) { z_ = value; }
    inline void set_z(const uint32_t&& value) { z_ = value; }
    inline uint32_t& mutable_z() { return z_.get(); }
    inline const uint32_t& get_z() const { return z_.get(); }
    inline uint32_t z() const { return z_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = x_.serialize_with_id(static_cast<uint32_t>(FieldNumber::X), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = y_.serialize_with_id(static_cast<uint32_t>(FieldNumber::Y), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = z_.serialize_with_id(static_cast<uint32_t>(FieldNumber::Z), buffer, false);
      }

      return return_value;
    };

#ifdef PARTIAL_SERIALIZATION_ENABLED
    ::EmbeddedProto::Error deserialize_partial(::EmbeddedProto::ReadBufferInterface& buffer,
                                               ::EmbeddedProto::MessageState& state) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      bool continue_deserializing = true;

      while(continue_deserializing)
      {
        if(::EmbeddedProto::FieldProcessingPhase::TAG == state.phase)
        {
          state.field_id = 0U;
          return_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, state.wire_type, state.field_id);
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            if(::EmbeddedProto::WireFormatter::WireType::END_GROUP == state.wire_type)
            {
              // End of a DELIMITED (group) message. The END_GROUP tag is consumed and the
              // COMPLETE phase signals completion to the caller owning the framing
              // (deserialize_partial_as_group). Stop the loop here, the completion
              // handling below must not start the next field. Inside a length-delimited
              // field this tag is malformed, deserialize_partial_as_field rejects it.
              state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
              continue_deserializing = false;
            }
            else
            {
              state.phase = (::EmbeddedProto::WireFormatter::WireType::LENGTH_DELIMITED == state.wire_type)
                ? ::EmbeddedProto::FieldProcessingPhase::SIZE
                : ::EmbeddedProto::FieldProcessingPhase::DATA;
            }
          }
        }

        if((::EmbeddedProto::Error::NO_ERRORS == return_value)
           && ((::EmbeddedProto::FieldProcessingPhase::SIZE == state.phase)
               || (::EmbeddedProto::FieldProcessingPhase::DATA == state.phase)))
        {
          switch(static_cast<FieldNumber>(state.field_id))
          {
            case FieldNumber::X:
              return_value = x_.deserialize_partial_check_type(
                  buffer, state, ::EmbeddedProto::WireFormatter::WireType::VARINT);

              break;

            case FieldNumber::Y:
              return_value = y_.deserialize_partial_check_type(
                  buffer, state, ::EmbeddedProto::WireFormatter::WireType::VARINT);

              break;

            case FieldNumber::Z:
              return_value = z_.deserialize_partial_check_type(
                  buffer, state, ::EmbeddedProto::WireFormatter::WireType::VARINT);

              break;

            case FieldNumber::NOT_SET:
              return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
              break;

            default:
              return_value = skip_unknown_field_partial(buffer, state);
              break;
          }
        }

        if(continue_deserializing
           && (::EmbeddedProto::Error::NO_ERRORS == return_value)
           && (::EmbeddedProto::FieldProcessingPhase::COMPLETE == state.phase))
        {
          state.phase = ::EmbeddedProto::FieldProcessingPhase::TAG;
          state.field_id = 0U;
          state.size_value = 0U;
          state.bytes_remaining = 0U;
          state.element_index = 0U;
          if(nullptr != state.child)
          {
            state.child->reset();
          }
        }
        else
        {
          continue_deserializing = false;
        }
      }

      return return_value;
    }

    ::EmbeddedProto::Error serialize_partial(::EmbeddedProto::WriteBufferInterface& buffer, 
                                            ::EmbeddedProto::MessageState& state) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      
      // Get the field id to serialize (from state or start from first field)
      uint32_t field_id = state.field_id;

      static constexpr uint32_t STATIC_PARTIAL_ITERATION_BUDGET = 4U;
      const uint32_t serialized_size_value = max_serialized_size();
      uint32_t max_partial_iterations = STATIC_PARTIAL_ITERATION_BUDGET;
      if((std::numeric_limits<uint32_t>::max() - max_partial_iterations) > serialized_size_value)
      {
        max_partial_iterations += serialized_size_value;
      }
      else
      {
        max_partial_iterations = std::numeric_limits<uint32_t>::max();
      }
      
      // Iterate through fields based on state
      for(uint32_t iteration = 0;
          (iteration < max_partial_iterations)
          && (::EmbeddedProto::Error::NO_ERRORS == return_value)
          && (::EmbeddedProto::FieldProcessingPhase::COMPLETE != state.phase);
          ++iteration)
      {
        // Determine which field to serialize based on field_id
        switch(field_id)
        {
          case 0:
            // Start of serialization - initialize state
            // Start with first regular field.
            // Keep this order aligned with serialize().
            state.field_id = static_cast<uint32_t>(FieldNumber::X);
            state.phase = ::EmbeddedProto::FieldProcessingPhase::TAG;
            field_id = state.field_id;
            break;
            
          case static_cast<uint32_t>(FieldNumber::X):
            

            return_value = x_.serialize_partial_with_id(
                static_cast<uint32_t>(FieldNumber::X), buffer, state, false);

            break;
            
          case static_cast<uint32_t>(FieldNumber::Y):
            

            return_value = y_.serialize_partial_with_id(
                static_cast<uint32_t>(FieldNumber::Y), buffer, state, false);

            break;
            
          case static_cast<uint32_t>(FieldNumber::Z):
            

            return_value = z_.serialize_partial_with_id(
                static_cast<uint32_t>(FieldNumber::Z), buffer, state, false);

            break;
            
          default:
            // All fields serialized
            state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
            break;
        }
        
        // Move to next field when current field is complete
        if((::EmbeddedProto::FieldProcessingPhase::COMPLETE == state.phase) && 
           (::EmbeddedProto::Error::NO_ERRORS == return_value))
        {
          // Reset child state for nested messages before moving to next field
          if(nullptr != state.child)
          {
            state.child->reset();
          }

          // The next field starts with a clean count, a packed field otherwise
          // takes over the element index and byte count of the field before it.
          state.element_index = 0U;
          state.bytes_remaining = 0U;
          state.size_value = 0U;
          
          // Determine next field using switch-case
          switch(field_id)
          {
            case static_cast<uint32_t>(FieldNumber::X):
              field_id = static_cast<uint32_t>(FieldNumber::Y);
              state.field_id = field_id;
              state.phase = ::EmbeddedProto::FieldProcessingPhase::TAG;
              break;
              
            case static_cast<uint32_t>(FieldNumber::Y):
              field_id = static_cast<uint32_t>(FieldNumber::Z);
              state.field_id = field_id;
              state.phase = ::EmbeddedProto::FieldProcessingPhase::TAG;
              break;
              
            case static_cast<uint32_t>(FieldNumber::Z):
              // Last field - we're done
              field_id = 0;
              state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
              break;
              
            default:
              // Unknown field_id, mark complete
              state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
              break;
          }
        }
      }

      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::FieldProcessingPhase::COMPLETE != state.phase))
      {
        return_value = ::EmbeddedProto::Error::STATE_MISMATCH;
      }
      
      return return_value;
    }
#endif

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      // If we did not already deserialize a tag, obtain the next one. When we did remember a tag 
      // have been deserializing a field which was not yet fully received in the read buffer.
      if(0 == deserialize_id_number_)
      {
        return_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, deserialize_wire_type_, deserialize_id_number_);
      }

      bool continue_deserializing = ::EmbeddedProto::Error::NO_ERRORS == return_value;
      while(continue_deserializing)
      {
        // A DELIMITED (group) message terminates at its matching END_GROUP tag,
        // which has just been consumed. For a normal message this never occurs.
        if(::EmbeddedProto::WireFormatter::WireType::END_GROUP == deserialize_wire_type_)
        {
          deserialize_id_number_ = 0;
          break;
        }

        id_tag = static_cast<FieldNumber>(deserialize_id_number_);
        switch(id_tag)
        {
          case FieldNumber::X:
            return_value = x_.deserialize_check_type(buffer, deserialize_wire_type_);
            break;

          case FieldNumber::Y:
            return_value = y_.deserialize_check_type(buffer, deserialize_wire_type_);
            break;

          case FieldNumber::Z:
            return_value = z_.deserialize_check_type(buffer, deserialize_wire_type_);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, deserialize_wire_type_);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag but first reset the state such that in the case of an error reading 
          // the tag we will try again on the next call of this function.
          deserialize_id_number_ = 0;
          return_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, deserialize_wire_type_, deserialize_id_number_);
        
          if(::EmbeddedProto::Error::NO_ERRORS != return_value)
          {
            // If we reached the end of the buffer here assume the message is complete.
            if(::EmbeddedProto::Error::END_OF_BUFFER == return_value)
            {
              return_value = ::EmbeddedProto::Error::NO_ERRORS;
            }
            continue_deserializing = false;
          }
        }
        else
        {
          continue_deserializing = false;
        }
      }

      return return_value;
    };

    void clear() override
    {
      deserialize_id_number_ = 0;
      deserialize_wire_type_ = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      clear_x();
      clear_y();
      clear_z();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::X:
          name = X_NAME;
          break;
        case FieldNumber::Y:
          name = Y_NAME;
          break;
        case FieldNumber::Z:
          name = Z_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

    //! Calculate the maximum number of bytes required to serialize this type of message.
    /*!
      This function does not take into account a possible id of this message object is self.
      \return The number of bytes required at most to serialize this message type.
    */
    static constexpr uint32_t max_serialized_size()
    {
      using namespace ::EmbeddedProto;
      return 
          EmbeddedProto::uint32::max_serialized_size(static_cast<uint32_t>(FieldNumber::X))
          + EmbeddedProto::uint32::max_serialized_size(static_cast<uint32_t>(FieldNumber::Y))
          + EmbeddedProto::uint32::max_serialized_size(static_cast<uint32_t>(FieldNumber::Z))
        ;
    }

    //! Calculate the maximum number of bytes required to serialize this message including the field id number and tag.
    /*!
      \return The number of bytes required at most to serialize this message type.
    */
    static constexpr uint32_t max_serialized_size(const uint32_t field_number)
    {
      using namespace ::EmbeddedProto;
      return WireFormatter::VarintSize(WireFormatter::MakeTag(field_number, WireFormatter::WireType::LENGTH_DELIMITED)) // Size of the tag
        + WireFormatter::VarintSize(max_serialized_size()) // Length delimted value
        + max_serialized_size(); // Length of the serialized content
    }

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          const int32_t actual_chars_used = EmbeddedProto::min(n_chars_used, left_chars.size);
          left_chars.data += actual_chars_used;
          left_chars.size -= actual_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        const int32_t actual_chars_used = EmbeddedProto::min(n_chars_used, left_chars.size);
        left_chars.data += actual_chars_used;
        left_chars.size -= actual_chars_used;
      }

      left_chars = x_.to_string(left_chars, indent_level + 2, X_NAME, true);
      left_chars = y_.to_string(left_chars, indent_level + 2, Y_NAME, false);
      left_chars = z_.to_string(left_chars, indent_level + 2, Z_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        const int32_t actual_chars_used = EmbeddedProto::min(n_chars_used, left_chars.size);
        left_chars.data += actual_chars_used;
        left_chars.size -= actual_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:



      //! The last id number deserialized from a tag. This is used as the internal state of the deserialize function.
      uint32_t deserialize_id_number_ = 0;
      //! The last wire type deserialized from a tag. This is used as the internal state of the deserialize function.
      ::EmbeddedProto::WireFormatter::WireType deserialize_wire_type_ = ::EmbeddedProto::WireFormatter::WireType::VARINT;

      EmbeddedProto::uint32 x_ = 0U;
      EmbeddedProto::uint32 y_ = 0U;
      EmbeddedProto::uint32 z_ = 0U;

};

class B final: public ::EmbeddedProto::MessageInterface
{
  public:
    B() = default;
    B(const B& rhs )
    {
      set_u(rhs.get_u());
      set_v(rhs.get_v());
      set_w(rhs.get_w());
    }

    B(const B&& rhs ) noexcept
    {
      set_u(rhs.get_u());
      set_v(rhs.get_v());
      set_w(rhs.get_w());
    }

    ~B() = default;

    //! The full protobuf name of this message type, the name used in the type url of a google.protobuf.Any.
    static constexpr char const* MESSAGE_FULL_NAME = "demo.B";

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      U = 1,
      V = 2,
      W = 3
    };

#ifdef PARTIAL_SERIALIZATION_ENABLED
    //! State depth for partial serialization.
    static constexpr uint32_t STATE_DEPTH = 1;
    
    //! Convenience typedef for the state stack.
    using StateStack = ::EmbeddedProto::MessageStateStack<STATE_DEPTH>;
#endif

    B& operator=(const B& rhs)
    {
      
      set_u(rhs.get_u());
      set_v(rhs.get_v());
      set_w(rhs.get_w());
      return *this;
    }

    B& operator=(const B&& rhs) noexcept
    {
      
      set_u(rhs.get_u());
      set_v(rhs.get_v());
      set_w(rhs.get_w());
      return *this;
    }

    static constexpr char const* U_NAME = "u";
    inline void clear_u() { u_.clear(); }
    inline void set_u(const double& value) { u_ = value; }
    inline void set_u(const double&& value) { u_ = value; }
    inline double& mutable_u() { return u_.get(); }
    inline const double& get_u() const { return u_.get(); }
    inline double u() const { return u_.get(); }

    static constexpr char const* V_NAME = "v";
    inline void clear_v() { v_.clear(); }
    inline void set_v(const double& value) { v_ = value; }
    inline void set_v(const double&& value) { v_ = value; }
    inline double& mutable_v() { return v_.get(); }
    inline const double& get_v() const { return v_.get(); }
    inline double v() const { return v_.get(); }

    static constexpr char const* W_NAME = "w";
    inline void clear_w() { w_.clear(); }
    inline void set_w(const double& value) { w_ = value; }
    inline void set_w(const double&& value) { w_ = value; }
    inline double& mutable_w() { return w_.get(); }
    inline const double& get_w() const { return w_.get(); }
    inline double w() const { return w_.get(); }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = u_.serialize_with_id(static_cast<uint32_t>(FieldNumber::U), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = v_.serialize_with_id(static_cast<uint32_t>(FieldNumber::V), buffer, false);
      }

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = w_.serialize_with_id(static_cast<uint32_t>(FieldNumber::W), buffer, false);
      }

      return return_value;
    };

#ifdef PARTIAL_SERIALIZATION_ENABLED
    ::EmbeddedProto::Error deserialize_partial(::EmbeddedProto::ReadBufferInterface& buffer,
                                               ::EmbeddedProto::MessageState& state) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      bool continue_deserializing = true;

      while(continue_deserializing)
      {
        if(::EmbeddedProto::FieldProcessingPhase::TAG == state.phase)
        {
          state.field_id = 0U;
          return_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, state.wire_type, state.field_id);
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            if(::EmbeddedProto::WireFormatter::WireType::END_GROUP == state.wire_type)
            {
              // End of a DELIMITED (group) message. The END_GROUP tag is consumed and the
              // COMPLETE phase signals completion to the caller owning the framing
              // (deserialize_partial_as_group). Stop the loop here, the completion
              // handling below must not start the next field. Inside a length-delimited
              // field this tag is malformed, deserialize_partial_as_field rejects it.
              state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
              continue_deserializing = false;
            }
            else
            {
              state.phase = (::EmbeddedProto::WireFormatter::WireType::LENGTH_DELIMITED == state.wire_type)
                ? ::EmbeddedProto::FieldProcessingPhase::SIZE
                : ::EmbeddedProto::FieldProcessingPhase::DATA;
            }
          }
        }

        if((::EmbeddedProto::Error::NO_ERRORS == return_value)
           && ((::EmbeddedProto::FieldProcessingPhase::SIZE == state.phase)
               || (::EmbeddedProto::FieldProcessingPhase::DATA == state.phase)))
        {
          switch(static_cast<FieldNumber>(state.field_id))
          {
            case FieldNumber::U:
              return_value = u_.deserialize_partial_check_type(
                  buffer, state, ::EmbeddedProto::WireFormatter::WireType::FIXED64);

              break;

            case FieldNumber::V:
              return_value = v_.deserialize_partial_check_type(
                  buffer, state, ::EmbeddedProto::WireFormatter::WireType::FIXED64);

              break;

            case FieldNumber::W:
              return_value = w_.deserialize_partial_check_type(
                  buffer, state, ::EmbeddedProto::WireFormatter::WireType::FIXED64);

              break;

            case FieldNumber::NOT_SET:
              return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
              break;

            default:
              return_value = skip_unknown_field_partial(buffer, state);
              break;
          }
        }

        if(continue_deserializing
           && (::EmbeddedProto::Error::NO_ERRORS == return_value)
           && (::EmbeddedProto::FieldProcessingPhase::COMPLETE == state.phase))
        {
          state.phase = ::EmbeddedProto::FieldProcessingPhase::TAG;
          state.field_id = 0U;
          state.size_value = 0U;
          state.bytes_remaining = 0U;
          state.element_index = 0U;
          if(nullptr != state.child)
          {
            state.child->reset();
          }
        }
        else
        {
          continue_deserializing = false;
        }
      }

      return return_value;
    }

    ::EmbeddedProto::Error serialize_partial(::EmbeddedProto::WriteBufferInterface& buffer, 
                                            ::EmbeddedProto::MessageState& state) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      
      // Get the field id to serialize (from state or start from first field)
      uint32_t field_id = state.field_id;

      static constexpr uint32_t STATIC_PARTIAL_ITERATION_BUDGET = 4U;
      const uint32_t serialized_size_value = max_serialized_size();
      uint32_t max_partial_iterations = STATIC_PARTIAL_ITERATION_BUDGET;
      if((std::numeric_limits<uint32_t>::max() - max_partial_iterations) > serialized_size_value)
      {
        max_partial_iterations += serialized_size_value;
      }
      else
      {
        max_partial_iterations = std::numeric_limits<uint32_t>::max();
      }
      
      // Iterate through fields based on state
      for(uint32_t iteration = 0;
          (iteration < max_partial_iterations)
          && (::EmbeddedProto::Error::NO_ERRORS == return_value)
          && (::EmbeddedProto::FieldProcessingPhase::COMPLETE != state.phase);
          ++iteration)
      {
        // Determine which field to serialize based on field_id
        switch(field_id)
        {
          case 0:
            // Start of serialization - initialize state
            // Start with first regular field.
            // Keep this order aligned with serialize().
            state.field_id = static_cast<uint32_t>(FieldNumber::U);
            state.phase = ::EmbeddedProto::FieldProcessingPhase::TAG;
            field_id = state.field_id;
            break;
            
          case static_cast<uint32_t>(FieldNumber::U):
            

            return_value = u_.serialize_partial_with_id(
                static_cast<uint32_t>(FieldNumber::U), buffer, state, false);

            break;
            
          case static_cast<uint32_t>(FieldNumber::V):
            

            return_value = v_.serialize_partial_with_id(
                static_cast<uint32_t>(FieldNumber::V), buffer, state, false);

            break;
            
          case static_cast<uint32_t>(FieldNumber::W):
            

            return_value = w_.serialize_partial_with_id(
                static_cast<uint32_t>(FieldNumber::W), buffer, state, false);

            break;
            
          default:
            // All fields serialized
            state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
            break;
        }
        
        // Move to next field when current field is complete
        if((::EmbeddedProto::FieldProcessingPhase::COMPLETE == state.phase) && 
           (::EmbeddedProto::Error::NO_ERRORS == return_value))
        {
          // Reset child state for nested messages before moving to next field
          if(nullptr != state.child)
          {
            state.child->reset();
          }

          // The next field starts with a clean count, a packed field otherwise
          // takes over the element index and byte count of the field before it.
          state.element_index = 0U;
          state.bytes_remaining = 0U;
          state.size_value = 0U;
          
          // Determine next field using switch-case
          switch(field_id)
          {
            case static_cast<uint32_t>(FieldNumber::U):
              field_id = static_cast<uint32_t>(FieldNumber::V);
              state.field_id = field_id;
              state.phase = ::EmbeddedProto::FieldProcessingPhase::TAG;
              break;
              
            case static_cast<uint32_t>(FieldNumber::V):
              field_id = static_cast<uint32_t>(FieldNumber::W);
              state.field_id = field_id;
              state.phase = ::EmbeddedProto::FieldProcessingPhase::TAG;
              break;
              
            case static_cast<uint32_t>(FieldNumber::W):
              // Last field - we're done
              field_id = 0;
              state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
              break;
              
            default:
              // Unknown field_id, mark complete
              state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
              break;
          }
        }
      }

      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::FieldProcessingPhase::COMPLETE != state.phase))
      {
        return_value = ::EmbeddedProto::Error::STATE_MISMATCH;
      }
      
      return return_value;
    }
#endif

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      // If we did not already deserialize a tag, obtain the next one. When we did remember a tag 
      // have been deserializing a field which was not yet fully received in the read buffer.
      if(0 == deserialize_id_number_)
      {
        return_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, deserialize_wire_type_, deserialize_id_number_);
      }

      bool continue_deserializing = ::EmbeddedProto::Error::NO_ERRORS == return_value;
      while(continue_deserializing)
      {
        // A DELIMITED (group) message terminates at its matching END_GROUP tag,
        // which has just been consumed. For a normal message this never occurs.
        if(::EmbeddedProto::WireFormatter::WireType::END_GROUP == deserialize_wire_type_)
        {
          deserialize_id_number_ = 0;
          break;
        }

        id_tag = static_cast<FieldNumber>(deserialize_id_number_);
        switch(id_tag)
        {
          case FieldNumber::U:
            return_value = u_.deserialize_check_type(buffer, deserialize_wire_type_);
            break;

          case FieldNumber::V:
            return_value = v_.deserialize_check_type(buffer, deserialize_wire_type_);
            break;

          case FieldNumber::W:
            return_value = w_.deserialize_check_type(buffer, deserialize_wire_type_);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, deserialize_wire_type_);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag but first reset the state such that in the case of an error reading 
          // the tag we will try again on the next call of this function.
          deserialize_id_number_ = 0;
          return_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, deserialize_wire_type_, deserialize_id_number_);
        
          if(::EmbeddedProto::Error::NO_ERRORS != return_value)
          {
            // If we reached the end of the buffer here assume the message is complete.
            if(::EmbeddedProto::Error::END_OF_BUFFER == return_value)
            {
              return_value = ::EmbeddedProto::Error::NO_ERRORS;
            }
            continue_deserializing = false;
          }
        }
        else
        {
          continue_deserializing = false;
        }
      }

      return return_value;
    };

    void clear() override
    {
      deserialize_id_number_ = 0;
      deserialize_wire_type_ = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      clear_u();
      clear_v();
      clear_w();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::U:
          name = U_NAME;
          break;
        case FieldNumber::V:
          name = V_NAME;
          break;
        case FieldNumber::W:
          name = W_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

    //! Calculate the maximum number of bytes required to serialize this type of message.
    /*!
      This function does not take into account a possible id of this message object is self.
      \return The number of bytes required at most to serialize this message type.
    */
    static constexpr uint32_t max_serialized_size()
    {
      using namespace ::EmbeddedProto;
      return 
          EmbeddedProto::doublefixed::max_serialized_size(static_cast<uint32_t>(FieldNumber::U))
          + EmbeddedProto::doublefixed::max_serialized_size(static_cast<uint32_t>(FieldNumber::V))
          + EmbeddedProto::doublefixed::max_serialized_size(static_cast<uint32_t>(FieldNumber::W))
        ;
    }

    //! Calculate the maximum number of bytes required to serialize this message including the field id number and tag.
    /*!
      \return The number of bytes required at most to serialize this message type.
    */
    static constexpr uint32_t max_serialized_size(const uint32_t field_number)
    {
      using namespace ::EmbeddedProto;
      return WireFormatter::VarintSize(WireFormatter::MakeTag(field_number, WireFormatter::WireType::LENGTH_DELIMITED)) // Size of the tag
        + WireFormatter::VarintSize(max_serialized_size()) // Length delimted value
        + max_serialized_size(); // Length of the serialized content
    }

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          const int32_t actual_chars_used = EmbeddedProto::min(n_chars_used, left_chars.size);
          left_chars.data += actual_chars_used;
          left_chars.size -= actual_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        const int32_t actual_chars_used = EmbeddedProto::min(n_chars_used, left_chars.size);
        left_chars.data += actual_chars_used;
        left_chars.size -= actual_chars_used;
      }

      left_chars = u_.to_string(left_chars, indent_level + 2, U_NAME, true);
      left_chars = v_.to_string(left_chars, indent_level + 2, V_NAME, false);
      left_chars = w_.to_string(left_chars, indent_level + 2, W_NAME, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        const int32_t actual_chars_used = EmbeddedProto::min(n_chars_used, left_chars.size);
        left_chars.data += actual_chars_used;
        left_chars.size -= actual_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:



      //! The last id number deserialized from a tag. This is used as the internal state of the deserialize function.
      uint32_t deserialize_id_number_ = 0;
      //! The last wire type deserialized from a tag. This is used as the internal state of the deserialize function.
      ::EmbeddedProto::WireFormatter::WireType deserialize_wire_type_ = ::EmbeddedProto::WireFormatter::WireType::VARINT;

      EmbeddedProto::doublefixed u_ = 0.0;
      EmbeddedProto::doublefixed v_ = 0.0;
      EmbeddedProto::doublefixed w_ = 0.0;

};

class reply final: public ::EmbeddedProto::MessageInterface
{
  public:
    reply() = default;
    reply(const reply& rhs )
    {
      set_msgId(rhs.get_msgId());
      if(rhs.get_which_type() != which_type)
      {
        // First delete the old object in the oneof.
        clear_type();
      }

      switch(rhs.get_which_type())
      {
        case FieldNumber::A:
          set_a(rhs.get_a());
          break;

        case FieldNumber::B:
          set_b(rhs.get_b());
          break;

        default:
          break;
      }

    }

    reply(const reply&& rhs ) noexcept
    {
      set_msgId(rhs.get_msgId());
      if(rhs.get_which_type() != which_type)
      {
        // First delete the old object in the oneof.
        clear_type();
      }

      switch(rhs.get_which_type())
      {
        case FieldNumber::A:
          set_a(rhs.get_a());
          break;

        case FieldNumber::B:
          set_b(rhs.get_b());
          break;

        default:
          break;
      }

    }

    ~reply() = default;

    //! The full protobuf name of this message type, the name used in the type url of a google.protobuf.Any.
    static constexpr char const* MESSAGE_FULL_NAME = "demo.reply";

    enum class FieldNumber : uint32_t
    {
      NOT_SET = 0,
      MSGID = 1,
      A = 2,
      B = 3
    };

#ifdef PARTIAL_SERIALIZATION_ENABLED
    //! State depth for partial serialization.
    static constexpr uint32_t STATE_DEPTH = 2;
    
    //! Convenience typedef for the state stack.
    using StateStack = ::EmbeddedProto::MessageStateStack<STATE_DEPTH>;
#endif

    reply& operator=(const reply& rhs)
    {
      
      set_msgId(rhs.get_msgId());
      if(rhs.get_which_type() != which_type)
      {
        // First delete the old object in the oneof.
        clear_type();
      }

      switch(rhs.get_which_type())
      {
        case FieldNumber::A:
          set_a(rhs.get_a());
          break;

        case FieldNumber::B:
          set_b(rhs.get_b());
          break;

        default:
          break;
      }

      return *this;
    }

    reply& operator=(const reply&& rhs) noexcept
    {
      
      set_msgId(rhs.get_msgId());
      if(rhs.get_which_type() != which_type)
      {
        // First delete the old object in the oneof.
        clear_type();
      }

      switch(rhs.get_which_type())
      {
        case FieldNumber::A:
          set_a(rhs.get_a());
          break;

        case FieldNumber::B:
          set_b(rhs.get_b());
          break;

        default:
          break;
      }

      return *this;
    }

    static constexpr char const* MSGID_NAME = "msgId";
    inline void clear_msgId() { msgId_.clear(); }
    inline void set_msgId(const uint32_t& value) { msgId_ = value; }
    inline void set_msgId(const uint32_t&& value) { msgId_ = value; }
    inline uint32_t& mutable_msgId() { return msgId_.get(); }
    inline const uint32_t& get_msgId() const { return msgId_.get(); }
    inline uint32_t msgId() const { return msgId_.get(); }

    FieldNumber get_which_type() const { return which_type; }

    static constexpr char const* A_NAME = "a";
    inline bool has_a() const
    {
      return FieldNumber::A == which_type;
    }
    inline void clear_a()
    {
      if(FieldNumber::A == which_type)
      {
        which_type = FieldNumber::NOT_SET;
        ::EmbeddedProto::destroy_at(&type_.a_);
      }
    }
    inline void set_a(const A& value)
    {
      if(FieldNumber::A != which_type)
      {
        init_type(FieldNumber::A);
      }
      type_.a_ = value;
    }
    inline void set_a(const A&& value)
    {
      if(FieldNumber::A != which_type)
      {
        init_type(FieldNumber::A);
      }
      type_.a_ = value;
    }
    inline A& mutable_a()
    {
      if(FieldNumber::A != which_type)
      {
        init_type(FieldNumber::A);
      }
      return type_.a_;
    }
    inline const A& get_a() const { return type_.a_; }
    inline const A& a() const { return type_.a_; }

    static constexpr char const* B_NAME = "b";
    inline bool has_b() const
    {
      return FieldNumber::B == which_type;
    }
    inline void clear_b()
    {
      if(FieldNumber::B == which_type)
      {
        which_type = FieldNumber::NOT_SET;
        ::EmbeddedProto::destroy_at(&type_.b_);
      }
    }
    inline void set_b(const B& value)
    {
      if(FieldNumber::B != which_type)
      {
        init_type(FieldNumber::B);
      }
      type_.b_ = value;
    }
    inline void set_b(const B&& value)
    {
      if(FieldNumber::B != which_type)
      {
        init_type(FieldNumber::B);
      }
      type_.b_ = value;
    }
    inline B& mutable_b()
    {
      if(FieldNumber::B != which_type)
      {
        init_type(FieldNumber::B);
      }
      return type_.b_;
    }
    inline const B& get_b() const { return type_.b_; }
    inline const B& b() const { return type_.b_; }


    ::EmbeddedProto::Error serialize(::EmbeddedProto::WriteBufferInterface& buffer) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;

      if(::EmbeddedProto::Error::NO_ERRORS == return_value)
      {
        return_value = msgId_.serialize_with_id(static_cast<uint32_t>(FieldNumber::MSGID), buffer, false);
      }

      switch(which_type)
      {
        case FieldNumber::A:
          if(has_a() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = type_.a_.serialize_len(static_cast<uint32_t>(FieldNumber::A), type_.a_.serialized_size(), buffer, true);
          }

          break;

        case FieldNumber::B:
          if(has_b() && (::EmbeddedProto::Error::NO_ERRORS == return_value))
          {
            return_value = type_.b_.serialize_len(static_cast<uint32_t>(FieldNumber::B), type_.b_.serialized_size(), buffer, true);
          }

          break;

        default:
          break;
      }

      return return_value;
    };

#ifdef PARTIAL_SERIALIZATION_ENABLED
    ::EmbeddedProto::Error deserialize_partial(::EmbeddedProto::ReadBufferInterface& buffer,
                                               ::EmbeddedProto::MessageState& state) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      bool continue_deserializing = true;

      while(continue_deserializing)
      {
        if(::EmbeddedProto::FieldProcessingPhase::TAG == state.phase)
        {
          state.field_id = 0U;
          return_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, state.wire_type, state.field_id);
          if(::EmbeddedProto::Error::NO_ERRORS == return_value)
          {
            if(::EmbeddedProto::WireFormatter::WireType::END_GROUP == state.wire_type)
            {
              // End of a DELIMITED (group) message. The END_GROUP tag is consumed and the
              // COMPLETE phase signals completion to the caller owning the framing
              // (deserialize_partial_as_group). Stop the loop here, the completion
              // handling below must not start the next field. Inside a length-delimited
              // field this tag is malformed, deserialize_partial_as_field rejects it.
              state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
              continue_deserializing = false;
            }
            else
            {
              state.phase = (::EmbeddedProto::WireFormatter::WireType::LENGTH_DELIMITED == state.wire_type)
                ? ::EmbeddedProto::FieldProcessingPhase::SIZE
                : ::EmbeddedProto::FieldProcessingPhase::DATA;
            }
          }
        }

        if((::EmbeddedProto::Error::NO_ERRORS == return_value)
           && ((::EmbeddedProto::FieldProcessingPhase::SIZE == state.phase)
               || (::EmbeddedProto::FieldProcessingPhase::DATA == state.phase)))
        {
          switch(static_cast<FieldNumber>(state.field_id))
          {
            case FieldNumber::MSGID:
              return_value = msgId_.deserialize_partial_check_type(
                  buffer, state, ::EmbeddedProto::WireFormatter::WireType::VARINT);

              break;

            case FieldNumber::A:
              if(FieldNumber::A != which_type)
              {
                init_type(FieldNumber::A);
              }
              return_value = type_.a_.deserialize_partial_as_field(buffer, state);

              break;

            case FieldNumber::B:
              if(FieldNumber::B != which_type)
              {
                init_type(FieldNumber::B);
              }
              return_value = type_.b_.deserialize_partial_as_field(buffer, state);

              break;

            case FieldNumber::NOT_SET:
              return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
              break;

            default:
              return_value = skip_unknown_field_partial(buffer, state);
              break;
          }
        }

        if(continue_deserializing
           && (::EmbeddedProto::Error::NO_ERRORS == return_value)
           && (::EmbeddedProto::FieldProcessingPhase::COMPLETE == state.phase))
        {
          state.phase = ::EmbeddedProto::FieldProcessingPhase::TAG;
          state.field_id = 0U;
          state.size_value = 0U;
          state.bytes_remaining = 0U;
          state.element_index = 0U;
          if(nullptr != state.child)
          {
            state.child->reset();
          }
        }
        else
        {
          continue_deserializing = false;
        }
      }

      return return_value;
    }

    ::EmbeddedProto::Error serialize_partial(::EmbeddedProto::WriteBufferInterface& buffer, 
                                            ::EmbeddedProto::MessageState& state) const override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      
      // Get the field id to serialize (from state or start from first field)
      uint32_t field_id = state.field_id;

      static constexpr uint32_t STATIC_PARTIAL_ITERATION_BUDGET = 4U;
      const uint32_t serialized_size_value = max_serialized_size();
      uint32_t max_partial_iterations = STATIC_PARTIAL_ITERATION_BUDGET;
      if((std::numeric_limits<uint32_t>::max() - max_partial_iterations) > serialized_size_value)
      {
        max_partial_iterations += serialized_size_value;
      }
      else
      {
        max_partial_iterations = std::numeric_limits<uint32_t>::max();
      }
      
      // Iterate through fields based on state
      for(uint32_t iteration = 0;
          (iteration < max_partial_iterations)
          && (::EmbeddedProto::Error::NO_ERRORS == return_value)
          && (::EmbeddedProto::FieldProcessingPhase::COMPLETE != state.phase);
          ++iteration)
      {
        // Determine which field to serialize based on field_id
        switch(field_id)
        {
          case 0:
            // Start of serialization - initialize state
            // Start with first regular field.
            // Keep this order aligned with serialize().
            state.field_id = static_cast<uint32_t>(FieldNumber::MSGID);
            state.phase = ::EmbeddedProto::FieldProcessingPhase::TAG;
            field_id = state.field_id;
            break;
            
          case static_cast<uint32_t>(FieldNumber::MSGID):
            

            return_value = msgId_.serialize_partial_with_id(
                static_cast<uint32_t>(FieldNumber::MSGID), buffer, state, false);

            break;
            
          case static_cast<uint32_t>(FieldNumber::A):
            // Check if this oneof field is the one that's set
            if(FieldNumber::A == which_type)
            {
              

              if(has_a())
              {
                return_value = type_.a_.serialize_partial_as_field(
                    static_cast<uint32_t>(FieldNumber::A), buffer, state, true);
              }
              else
              {
                state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
              }



            }
            else
            {
              // This oneof field is not set, skip to complete
              state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
            }
            break;
            
          case static_cast<uint32_t>(FieldNumber::B):
            // Check if this oneof field is the one that's set
            if(FieldNumber::B == which_type)
            {
              

              if(has_b())
              {
                return_value = type_.b_.serialize_partial_as_field(
                    static_cast<uint32_t>(FieldNumber::B), buffer, state, true);
              }
              else
              {
                state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
              }



            }
            else
            {
              // This oneof field is not set, skip to complete
              state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
            }
            break;
            
          default:
            // All fields serialized
            state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
            break;
        }
        
        // Move to next field when current field is complete
        if((::EmbeddedProto::FieldProcessingPhase::COMPLETE == state.phase) && 
           (::EmbeddedProto::Error::NO_ERRORS == return_value))
        {
          // Reset child state for nested messages before moving to next field
          if(nullptr != state.child)
          {
            state.child->reset();
          }

          // The next field starts with a clean count, a packed field otherwise
          // takes over the element index and byte count of the field before it.
          state.element_index = 0U;
          state.bytes_remaining = 0U;
          state.size_value = 0U;
          
          // Determine next field using switch-case
          switch(field_id)
          {
            case static_cast<uint32_t>(FieldNumber::MSGID):
              // Move on to the set member of the first oneof which has one.
              field_id = first_set_oneof_field(0U);
              state.field_id = field_id;
              state.phase = (0U == field_id) ? ::EmbeddedProto::FieldProcessingPhase::COMPLETE
                                             : ::EmbeddedProto::FieldProcessingPhase::TAG;
              break;
              
            case static_cast<uint32_t>(FieldNumber::A):
              // Move on to the set member of the next oneof which has one.
              field_id = first_set_oneof_field(1U);
              state.field_id = field_id;
              state.phase = (0U == field_id) ? ::EmbeddedProto::FieldProcessingPhase::COMPLETE
                                             : ::EmbeddedProto::FieldProcessingPhase::TAG;
              break;
              
            case static_cast<uint32_t>(FieldNumber::B):
              // Move on to the set member of the next oneof which has one.
              field_id = first_set_oneof_field(1U);
              state.field_id = field_id;
              state.phase = (0U == field_id) ? ::EmbeddedProto::FieldProcessingPhase::COMPLETE
                                             : ::EmbeddedProto::FieldProcessingPhase::TAG;
              break;
              
            default:
              // Unknown field_id, mark complete
              state.phase = ::EmbeddedProto::FieldProcessingPhase::COMPLETE;
              break;
          }
        }
      }

      if((::EmbeddedProto::Error::NO_ERRORS == return_value)
         && (::EmbeddedProto::FieldProcessingPhase::COMPLETE != state.phase))
      {
        return_value = ::EmbeddedProto::Error::STATE_MISMATCH;
      }
      
      return return_value;
    }
#endif

    ::EmbeddedProto::Error deserialize(::EmbeddedProto::ReadBufferInterface& buffer) override
    {
      ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
      FieldNumber id_tag = FieldNumber::NOT_SET;

      // If we did not already deserialize a tag, obtain the next one. When we did remember a tag 
      // have been deserializing a field which was not yet fully received in the read buffer.
      if(0 == deserialize_id_number_)
      {
        return_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, deserialize_wire_type_, deserialize_id_number_);
      }

      bool continue_deserializing = ::EmbeddedProto::Error::NO_ERRORS == return_value;
      while(continue_deserializing)
      {
        // A DELIMITED (group) message terminates at its matching END_GROUP tag,
        // which has just been consumed. For a normal message this never occurs.
        if(::EmbeddedProto::WireFormatter::WireType::END_GROUP == deserialize_wire_type_)
        {
          deserialize_id_number_ = 0;
          break;
        }

        id_tag = static_cast<FieldNumber>(deserialize_id_number_);
        switch(id_tag)
        {
          case FieldNumber::MSGID:
            return_value = msgId_.deserialize_check_type(buffer, deserialize_wire_type_);
            break;

          case FieldNumber::A:
          case FieldNumber::B:
            return_value = deserialize_type(id_tag, buffer);
            break;

          case FieldNumber::NOT_SET:
            return_value = ::EmbeddedProto::Error::INVALID_FIELD_ID;
            break;

          default:
            return_value = skip_unknown_field(buffer, deserialize_wire_type_);
            break;
        }

        if(::EmbeddedProto::Error::NO_ERRORS == return_value)
        {
          // Read the next tag but first reset the state such that in the case of an error reading 
          // the tag we will try again on the next call of this function.
          deserialize_id_number_ = 0;
          return_value = ::EmbeddedProto::WireFormatter::DeserializeTag(buffer, deserialize_wire_type_, deserialize_id_number_);
        
          if(::EmbeddedProto::Error::NO_ERRORS != return_value)
          {
            // If we reached the end of the buffer here assume the message is complete.
            if(::EmbeddedProto::Error::END_OF_BUFFER == return_value)
            {
              return_value = ::EmbeddedProto::Error::NO_ERRORS;
            }
            continue_deserializing = false;
          }
        }
        else
        {
          continue_deserializing = false;
        }
      }

      return return_value;
    };

    void clear() override
    {
      deserialize_id_number_ = 0;
      deserialize_wire_type_ = ::EmbeddedProto::WireFormatter::WireType::VARINT;
      clear_msgId();
      clear_type();

    }

#ifndef DISABLE_FIELD_NUMBER_TO_NAME 

    static char const* field_number_to_name(const FieldNumber fieldNumber)
    {
      char const* name = nullptr;
      switch(fieldNumber)
      {
        case FieldNumber::MSGID:
          name = MSGID_NAME;
          break;
        case FieldNumber::A:
          name = A_NAME;
          break;
        case FieldNumber::B:
          name = B_NAME;
          break;
        default:
          name = "Invalid FieldNumber";
          break;
      }
      return name;
    }

#endif

    //! Calculate the maximum number of bytes required to serialize this type of message.
    /*!
      This function does not take into account a possible id of this message object is self.
      \return The number of bytes required at most to serialize this message type.
    */
    static constexpr uint32_t max_serialized_size()
    {
      using namespace ::EmbeddedProto;
      return 
          EmbeddedProto::uint32::max_serialized_size(static_cast<uint32_t>(FieldNumber::MSGID))
          + max_serialized_size_type()
        ;
    }

    //! Calculate the maximum number of bytes required to serialize this message including the field id number and tag.
    /*!
      \return The number of bytes required at most to serialize this message type.
    */
    static constexpr uint32_t max_serialized_size(const uint32_t field_number)
    {
      using namespace ::EmbeddedProto;
      return WireFormatter::VarintSize(WireFormatter::MakeTag(field_number, WireFormatter::WireType::LENGTH_DELIMITED)) // Size of the tag
        + WireFormatter::VarintSize(max_serialized_size()) // Length delimted value
        + max_serialized_size(); // Length of the serialized content
    }

#ifdef MSG_TO_STRING

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str) const
    {
      return this->to_string(str, 0, nullptr, true);
    }

    ::EmbeddedProto::string_view to_string(::EmbeddedProto::string_view& str, const uint32_t indent_level, char const* name, const bool first_field) const override
    {
      ::EmbeddedProto::string_view left_chars = str;
      int32_t n_chars_used = 0;

      if(!first_field)
      {
        // Add a comma behind the previous field.
        n_chars_used = snprintf(left_chars.data, left_chars.size, ",\n");
        if(0 < n_chars_used)
        {
          // Update the character pointer and characters left in the array.
          const int32_t actual_chars_used = EmbeddedProto::min(n_chars_used, left_chars.size);
          left_chars.data += actual_chars_used;
          left_chars.size -= actual_chars_used;
        }
      }

      if(nullptr != name)
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "\"%s\": {\n", name);
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s\"%s\": {\n", indent_level, " ", name);
        }
      }
      else
      {
        if( 0 == indent_level)
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "{\n");
        }
        else
        {
          n_chars_used = snprintf(left_chars.data, left_chars.size, "%*s{\n", indent_level, " ");
        }
      }
      
      if(0 < n_chars_used)
      {
        const int32_t actual_chars_used = EmbeddedProto::min(n_chars_used, left_chars.size);
        left_chars.data += actual_chars_used;
        left_chars.size -= actual_chars_used;
      }

      left_chars = msgId_.to_string(left_chars, indent_level + 2, MSGID_NAME, true);
      left_chars = to_string_type(left_chars, indent_level + 2, false);
  
      if( 0 == indent_level) 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n}");
      }
      else 
      {
        n_chars_used = snprintf(left_chars.data, left_chars.size, "\n%*s}", indent_level, " ");
      }

      if(0 < n_chars_used)
      {
        const int32_t actual_chars_used = EmbeddedProto::min(n_chars_used, left_chars.size);
        left_chars.data += actual_chars_used;
        left_chars.size -= actual_chars_used;
      }

      return left_chars;
    }

#endif // End of MSG_TO_STRING

  private:

#ifdef PARTIAL_SERIALIZATION_ENABLED
    //! The field number of the set member of the first oneof at or after the given oneof index, zero when none is set.
    uint32_t first_set_oneof_field(const uint32_t oneof_index) const
    {
      uint32_t field_number = 0U;
      if((0U == field_number) && (oneof_index <= 0U))
      {
        field_number = static_cast<uint32_t>(which_type);
      }
      return field_number;
    }
#endif // PARTIAL_SERIALIZATION_ENABLED


      //! The last id number deserialized from a tag. This is used as the internal state of the deserialize function.
      uint32_t deserialize_id_number_ = 0;
      //! The last wire type deserialized from a tag. This is used as the internal state of the deserialize function.
      ::EmbeddedProto::WireFormatter::WireType deserialize_wire_type_ = ::EmbeddedProto::WireFormatter::WireType::VARINT;

      EmbeddedProto::uint32 msgId_ = 0U;

      FieldNumber which_type = FieldNumber::NOT_SET;
      union type
      {
        type() {}
        ~type() {}
        A a_;
        B b_;
      };
      type type_;

      void init_type(const FieldNumber field_id)
      {
        if(FieldNumber::NOT_SET != which_type)
        {
          // First delete the old object in the oneof.
          clear_type();
        }

        // C++11 unions only support nontrivial members when you explicitly call the placement new statement.
        switch(field_id)
        {
          case FieldNumber::A:
            new(&type_.a_) A;
            break;

          case FieldNumber::B:
            new(&type_.b_) B;
            break;

          default:
            break;
         }

         which_type = field_id;
      }

      void clear_type()
      {
        switch(which_type)
        {
          case FieldNumber::A:
            ::EmbeddedProto::destroy_at(&type_.a_);
            break;
          case FieldNumber::B:
            ::EmbeddedProto::destroy_at(&type_.b_);
            break;
          default:
            break;
        }
        which_type = FieldNumber::NOT_SET;
      }

      ::EmbeddedProto::Error deserialize_type(const FieldNumber field_id, 
                                    ::EmbeddedProto::ReadBufferInterface& buffer)
      {
        ::EmbeddedProto::Error return_value = ::EmbeddedProto::Error::NO_ERRORS;
        
        if(field_id != which_type)
        {
          init_type(field_id);
        }

        switch(which_type)
        {
          case FieldNumber::A:
            return_value = type_.a_.deserialize_check_type(buffer, deserialize_wire_type_);
            break;
          case FieldNumber::B:
            return_value = type_.b_.deserialize_check_type(buffer, deserialize_wire_type_);
            break;
          default:
            break;
        }

        // If we have a "serious failure", clear the oneof. The end of buffer could signal a partial 
        // deserialization so we should not clear in that case.
        if((::EmbeddedProto::Error::NO_ERRORS != return_value) && 
           (::EmbeddedProto::Error::END_OF_BUFFER != return_value))
        {
          clear_type();
        }
        return return_value;
      }

      static constexpr uint32_t max_serialized_size_type()
      {
        using namespace EmbeddedProto;
        return
            max(A::max_serialized_size(static_cast<uint32_t>(FieldNumber::A)),
                B::max_serialized_size(static_cast<uint32_t>(FieldNumber::B))
               )
        ;
      }

#ifdef MSG_TO_STRING 
      ::EmbeddedProto::string_view to_string_type(::EmbeddedProto::string_view& str, const uint32_t indent_level, const bool first_field) const
      {
        ::EmbeddedProto::string_view left_chars = str;

        switch(which_type)
        {
          case FieldNumber::A:
            left_chars = type_.a_.to_string(left_chars, indent_level, A_NAME, first_field);
            break;
          case FieldNumber::B:
            left_chars = type_.b_.to_string(left_chars, indent_level, B_NAME, first_field);
            break;
          default:
            break;
        }

        return left_chars;
      }

#endif // End of MSG_TO_STRING
};

} // End of namespace demo
#endif // REPLY_H